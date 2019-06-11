/*
	配列による線形リスト（索引付き）
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Null  -1			/* 空インデックス */

typedef enum {
	Term, Insert, Append, Delete, Clear, Print, Print1, Print2
} Menu;

typedef int  Index;		/* インデックス型 */

/* 会員番号インデックス */
typedef struct {
	int   no;
	Index ptr;
} key1;

/* 名前インデックス */
typedef struct {
	char  name[10];
	Index ptr;
} key2;

/*--- 要素 ---*/
typedef struct {
	int   no;			/* 会員番号 */
	char  name[10];		/* 名前 */
	Index next;			/* 次の要素のインデックス */
	Index Dnext;		/* 削除リストポインタ */
} Node;

/*--- 線形リスト ---*/
typedef struct {
	Node  *n;			/* リスト本体（配列） */
	Index top;			/* リストの先頭要素のインデックス */
	Index max;			/* 利用レコードの最大インデックス */
	Index deleted;		/* 削除リストの先頭要素のインデックス */
	Index max2;		/* 現在登録されているレコード数 */
	key1  *idx1;		/* 番号インデックステーブル */
	key2  *idx2;		/* 名前インデックステーブル */
} List;

#define Top     (list->top)				/* リストの先頭 */

#define Second  (list->n[Top].next)		/* リストの２番目 */

#define Next(x) (list->n[(x)].next)		/* xレコードの次の要素 */

/*--- 番号インデックステーブルからの探索 ---*/
int Search1(List *list, int no, Index *flag)
{
	int i = 0;
	int j = list->max2 - 1;

	if (j == -1) {							/* リストが空 */
		*flag = 0;
		return 0;
	}

	do {									/* ２分探索による探索 */
		int k = (i + j) / 2;
		int cmp = no - list->idx1[k].no;
		if (!cmp) {
			*flag = k;
			return 1;
		} else if (cmp > 0)
			i = k + 1;
		else
			j = k - 1;
	} while (i <= j);
	*flag = i;

	return 0;
}

/*--- 名前インデックステーブルからの探索 ---*/
int Search2(List *list, const char *name, Index *flag)
{
	int i = 0;
	int j = list->max2 - 1;

	if (j == -1) {							/* リストが空 */
		*flag = 0;
		return 0;
	}

	do {									/* ２分探索による探索 */
		int k = (i + j) / 2;
		int cmp = strcmp(name, list->idx2[k].name);
		if (!cmp) {
			*flag = k;
			return 1;
		} else if (cmp > 0)
			i = k + 1;
		else
			j = k - 1;
	} while (i <= j);
	*flag = i;

	return 0;
}

/*---- 挿入によるインデックステーブルの更新 ----*/
void Apnd(List *list, int no, const char *name, Index rec)
{
	Index i;
	Index idx;

	Search1(list, no, &idx);					/*--- 番号 ---*/
	for (i = list->max2; i > idx; i--)
		list->idx1[i] = list->idx1[i - 1];
	list->idx1[idx].no	= list->n[rec].no;
	list->idx1[idx].ptr = rec;

	Search2(list, name, &idx);					/*--- 名前 ---*/
	for (i = list->max2; i > idx; i--)
		list->idx2[i] = list->idx2[i - 1];
	strcpy(list->idx2[idx].name, list->n[rec].name);
	list->idx2[idx].ptr = rec;

	list->max2++;
}

/*---- リストから第recレコードを削除する ----*/
void Delt(List *list, Index rec)
{
	Index i;

	for (i = 0; list->idx1[i].ptr != rec; i++)	/*--- 番号 ---*/
		;
	for ( ; i < list->max2; i++)
		list->idx1[i] = list->idx1[i + 1];

	for (i = 0; list->idx2[i].ptr != rec; i++)	/*--- 名前 ---*/
		;
	for ( ; i < list->max2; i++)
		list->idx2[i] = list->idx2[i + 1];

	list->max2--;
}

/*--- 挿入すべきレコードのインデックスを返す ---*/
int GetIndex(List *list)
{
	if (list->deleted == Null)			/* 削除レコードがない場合 */
		return ++(list->max);
	else {
		Index rec = list->deleted;
		list->deleted = list->n[rec].Dnext;
		return rec;
	}
}

/*--- 指定したレコードを削除リストに登録する ---*/
void DeleteIndex(List *list, Index idx)
{
	if (list->deleted == Null) {			/* 削除レコードがない場合 */
		list->deleted = idx;
		list->n[idx].Dnext = Null;
	} else {
		Index ptr = list->deleted;
		list->deleted = idx;
		list->n[idx].Dnext = ptr;
	}
}

/*--- 要素の各メンバに値を設定 ----*/
void SetNode(Node *x, int no, const char *name, Index next)
{
	x->no   = no;
	x->next = next;
	strcpy(x->name, name);
}

/*--- 先頭に要素を挿入 ---*/
void InsertNode(List *list, int no, const char *name)
{
	Index ptr = Top;

	Top = GetIndex(list);
	SetNode(&list->n[Top], no, name, ptr);
	Apnd(list, no, name, Top);
}

/*--- 末尾に要素を追加 ----*/
void AppendNode(List *list, int no, const char *name)
{
	if (Top == Null)							/* リストが空であれば */
		InsertNode(list, no, name);				/* 先頭に挿入 */
	else {
		Index ptr = Top;
		while (Next(ptr) != Null)				/* 末尾ノードを見つける */
			ptr = Next(ptr);
		Next(ptr) = GetIndex(list);
		SetNode(&list->n[Next(ptr)], no, name, Null);
		Apnd(list, no, name, Next(ptr));
	}
}

/*--- 先頭の要素を削除 ---*/
void DeleteNode(List *list)
{
	if (Top != Null) {							/* リストが空でなければ */
		Index ptr = Second;
		DeleteIndex(list, Top);
		Delt(list, Top);
		Top = ptr;
	}
}

/*--- すべての要素を削除 ---*/
void ClearList(List *list)
{
	while (Top != Null)						/* リストが空になるまで */
		DeleteNode(list);					/* 先頭ノードを削除 */
}

/*--- すべての要素を表示（リスト順） ---*/
void PrintList(const List *list)
{
	Index ptr = Top;

	puts("【一覧表】");
	while (ptr != Null) {
		printf("%5d %-10.10s\n", list->n[ptr].no, list->n[ptr].name);
		ptr = Next(ptr);
	}
}

/*--- すべての要素を表示（番号順） ---*/
void PrintList1(const List *list)
{
	Index i;

	puts("【一覧表／番号順】");
	for (i = 0; i < list->max2; i++) {
		Index j = list->idx1[i].ptr;
		printf("%5d %-10.10s\n", list->n[j].no, list->n[j].name);
	}
}

/*--- すべての要素を表示（名前順） ---*/
void PrintList2(const List *list)
{
	Index i;

	puts("【一覧表／名前順】");
	for (i = 0; i < list->max2; i++) {
		Index j = list->idx2[i].ptr;
		printf("%5d %-10.10s\n", list->n[j].no, list->n[j].name);
	}
}

/*--- 線形リストの初期化 ---*/
void InitList(List *list, int size)
{
	list->n    = calloc(size, sizeof(Node));	/* リスト本体 */
	list->idx1 = calloc(size, sizeof(key1));	/* 会員番号リスト */
	list->idx2 = calloc(size, sizeof(key2));	/* 名前リスト */

	list->max2 = 0;
	list->top  = list->max = list->deleted = Null;
}

/*--- 線形リストの後始末 ---*/
void TermList(List *list)
{
	ClearList(list);				/* すべてのノードを削除 */

	free(list->n);
	free(list->idx1);
	free(list->idx2);
}

/*--- データの入力 ---*/
Node Read(const char *message)
{
	Node temp;

	printf("%sするデータを入力してください。\n", message);

	printf("番号：");   scanf("%d", &temp.no);
	printf("名前：");   scanf("%s", temp.name);

	return temp;
}

/*--- メニュー選択 ---*/
Menu SelectMenu(void)
{
	int ch;

	do {
		printf("\n(1) 先頭に要素を挿入     (2)末尾に要素を追加\n");
		printf("(3) 先頭の要素を削除     (4)すべての要素を削除\n");
		printf("(5) 全要素を表示(リスト順)\n");
		printf("(6) 全要素を表示(番 号 順)\n");
		printf("(7) 全要素を表示(名 前 順)\n");
		printf("(0) 処   理   終  了　　 ：");
		scanf("%d", &ch);
	} while (ch < Term || ch > Print2);

	return (Menu)ch;
}

/*--- メイン ---*/
int main(void)
{
	Menu menu;
	List list;

	InitList(&list, 100);		/* 最大ノード数は100個 */

	do {
		Node x;
		switch (menu = SelectMenu()) {
		 case Insert: x = Read("先頭に挿入");
					  InsertNode(&list, x.no, x.name);
					  break;
		 case Append: x = Read("末尾に追加");
					  AppendNode(&list, x.no, x.name);
					  break;
		 case Delete: DeleteNode(&list);
					  break;
		 case Clear : ClearList(&list);
					  break;
		 case Print : PrintList(&list);
					  break;
		 case Print1: PrintList1(&list);
					  break;
		 case Print2: PrintList2(&list);
					  break;
		}
	} while (menu != Term);

	TermList(&list);			/* 線形リストの利用を終了 */

	return 0;
}
