/*
	�z��ɂ����`���X�g�i�����t���j
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Null  -1			/* ��C���f�b�N�X */

typedef enum {
	Term, Insert, Append, Delete, Clear, Print, Print1, Print2
} Menu;

typedef int  Index;		/* �C���f�b�N�X�^ */

/* ����ԍ��C���f�b�N�X */
typedef struct {
	int   no;
	Index ptr;
} key1;

/* ���O�C���f�b�N�X */
typedef struct {
	char  name[10];
	Index ptr;
} key2;

/*--- �v�f ---*/
typedef struct {
	int   no;			/* ����ԍ� */
	char  name[10];		/* ���O */
	Index next;			/* ���̗v�f�̃C���f�b�N�X */
	Index Dnext;		/* �폜���X�g�|�C���^ */
} Node;

/*--- ���`���X�g ---*/
typedef struct {
	Node  *n;			/* ���X�g�{�́i�z��j */
	Index top;			/* ���X�g�̐擪�v�f�̃C���f�b�N�X */
	Index max;			/* ���p���R�[�h�̍ő�C���f�b�N�X */
	Index deleted;		/* �폜���X�g�̐擪�v�f�̃C���f�b�N�X */
	Index max2;		/* ���ݓo�^����Ă��郌�R�[�h�� */
	key1  *idx1;		/* �ԍ��C���f�b�N�X�e�[�u�� */
	key2  *idx2;		/* ���O�C���f�b�N�X�e�[�u�� */
} List;

#define Top     (list->top)				/* ���X�g�̐擪 */

#define Second  (list->n[Top].next)		/* ���X�g�̂Q�Ԗ� */

#define Next(x) (list->n[(x)].next)		/* x���R�[�h�̎��̗v�f */

/*--- �ԍ��C���f�b�N�X�e�[�u������̒T�� ---*/
int Search1(List *list, int no, Index *flag)
{
	int i = 0;
	int j = list->max2 - 1;

	if (j == -1) {							/* ���X�g���� */
		*flag = 0;
		return 0;
	}

	do {									/* �Q���T���ɂ��T�� */
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

/*--- ���O�C���f�b�N�X�e�[�u������̒T�� ---*/
int Search2(List *list, const char *name, Index *flag)
{
	int i = 0;
	int j = list->max2 - 1;

	if (j == -1) {							/* ���X�g���� */
		*flag = 0;
		return 0;
	}

	do {									/* �Q���T���ɂ��T�� */
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

/*---- �}���ɂ��C���f�b�N�X�e�[�u���̍X�V ----*/
void Apnd(List *list, int no, const char *name, Index rec)
{
	Index i;
	Index idx;

	Search1(list, no, &idx);					/*--- �ԍ� ---*/
	for (i = list->max2; i > idx; i--)
		list->idx1[i] = list->idx1[i - 1];
	list->idx1[idx].no	= list->n[rec].no;
	list->idx1[idx].ptr = rec;

	Search2(list, name, &idx);					/*--- ���O ---*/
	for (i = list->max2; i > idx; i--)
		list->idx2[i] = list->idx2[i - 1];
	strcpy(list->idx2[idx].name, list->n[rec].name);
	list->idx2[idx].ptr = rec;

	list->max2++;
}

/*---- ���X�g�����rec���R�[�h���폜���� ----*/
void Delt(List *list, Index rec)
{
	Index i;

	for (i = 0; list->idx1[i].ptr != rec; i++)	/*--- �ԍ� ---*/
		;
	for ( ; i < list->max2; i++)
		list->idx1[i] = list->idx1[i + 1];

	for (i = 0; list->idx2[i].ptr != rec; i++)	/*--- ���O ---*/
		;
	for ( ; i < list->max2; i++)
		list->idx2[i] = list->idx2[i + 1];

	list->max2--;
}

/*--- �}�����ׂ����R�[�h�̃C���f�b�N�X��Ԃ� ---*/
int GetIndex(List *list)
{
	if (list->deleted == Null)			/* �폜���R�[�h���Ȃ��ꍇ */
		return ++(list->max);
	else {
		Index rec = list->deleted;
		list->deleted = list->n[rec].Dnext;
		return rec;
	}
}

/*--- �w�肵�����R�[�h���폜���X�g�ɓo�^���� ---*/
void DeleteIndex(List *list, Index idx)
{
	if (list->deleted == Null) {			/* �폜���R�[�h���Ȃ��ꍇ */
		list->deleted = idx;
		list->n[idx].Dnext = Null;
	} else {
		Index ptr = list->deleted;
		list->deleted = idx;
		list->n[idx].Dnext = ptr;
	}
}

/*--- �v�f�̊e�����o�ɒl��ݒ� ----*/
void SetNode(Node *x, int no, const char *name, Index next)
{
	x->no   = no;
	x->next = next;
	strcpy(x->name, name);
}

/*--- �擪�ɗv�f��}�� ---*/
void InsertNode(List *list, int no, const char *name)
{
	Index ptr = Top;

	Top = GetIndex(list);
	SetNode(&list->n[Top], no, name, ptr);
	Apnd(list, no, name, Top);
}

/*--- �����ɗv�f��ǉ� ----*/
void AppendNode(List *list, int no, const char *name)
{
	if (Top == Null)							/* ���X�g����ł���� */
		InsertNode(list, no, name);				/* �擪�ɑ}�� */
	else {
		Index ptr = Top;
		while (Next(ptr) != Null)				/* �����m�[�h�������� */
			ptr = Next(ptr);
		Next(ptr) = GetIndex(list);
		SetNode(&list->n[Next(ptr)], no, name, Null);
		Apnd(list, no, name, Next(ptr));
	}
}

/*--- �擪�̗v�f���폜 ---*/
void DeleteNode(List *list)
{
	if (Top != Null) {							/* ���X�g����łȂ���� */
		Index ptr = Second;
		DeleteIndex(list, Top);
		Delt(list, Top);
		Top = ptr;
	}
}

/*--- ���ׂĂ̗v�f���폜 ---*/
void ClearList(List *list)
{
	while (Top != Null)						/* ���X�g����ɂȂ�܂� */
		DeleteNode(list);					/* �擪�m�[�h���폜 */
}

/*--- ���ׂĂ̗v�f��\���i���X�g���j ---*/
void PrintList(const List *list)
{
	Index ptr = Top;

	puts("�y�ꗗ�\�z");
	while (ptr != Null) {
		printf("%5d %-10.10s\n", list->n[ptr].no, list->n[ptr].name);
		ptr = Next(ptr);
	}
}

/*--- ���ׂĂ̗v�f��\���i�ԍ����j ---*/
void PrintList1(const List *list)
{
	Index i;

	puts("�y�ꗗ�\�^�ԍ����z");
	for (i = 0; i < list->max2; i++) {
		Index j = list->idx1[i].ptr;
		printf("%5d %-10.10s\n", list->n[j].no, list->n[j].name);
	}
}

/*--- ���ׂĂ̗v�f��\���i���O���j ---*/
void PrintList2(const List *list)
{
	Index i;

	puts("�y�ꗗ�\�^���O���z");
	for (i = 0; i < list->max2; i++) {
		Index j = list->idx2[i].ptr;
		printf("%5d %-10.10s\n", list->n[j].no, list->n[j].name);
	}
}

/*--- ���`���X�g�̏����� ---*/
void InitList(List *list, int size)
{
	list->n    = calloc(size, sizeof(Node));	/* ���X�g�{�� */
	list->idx1 = calloc(size, sizeof(key1));	/* ����ԍ����X�g */
	list->idx2 = calloc(size, sizeof(key2));	/* ���O���X�g */

	list->max2 = 0;
	list->top  = list->max = list->deleted = Null;
}

/*--- ���`���X�g�̌�n�� ---*/
void TermList(List *list)
{
	ClearList(list);				/* ���ׂẴm�[�h���폜 */

	free(list->n);
	free(list->idx1);
	free(list->idx2);
}

/*--- �f�[�^�̓��� ---*/
Node Read(const char *message)
{
	Node temp;

	printf("%s����f�[�^����͂��Ă��������B\n", message);

	printf("�ԍ��F");   scanf("%d", &temp.no);
	printf("���O�F");   scanf("%s", temp.name);

	return temp;
}

/*--- ���j���[�I�� ---*/
Menu SelectMenu(void)
{
	int ch;

	do {
		printf("\n(1) �擪�ɗv�f��}��     (2)�����ɗv�f��ǉ�\n");
		printf("(3) �擪�̗v�f���폜     (4)���ׂĂ̗v�f���폜\n");
		printf("(5) �S�v�f��\��(���X�g��)\n");
		printf("(6) �S�v�f��\��(�� �� ��)\n");
		printf("(7) �S�v�f��\��(�� �O ��)\n");
		printf("(0) ��   ��   �I  ���@�@ �F");
		scanf("%d", &ch);
	} while (ch < Term || ch > Print2);

	return (Menu)ch;
}

/*--- ���C�� ---*/
int main(void)
{
	Menu menu;
	List list;

	InitList(&list, 100);		/* �ő�m�[�h����100�� */

	do {
		Node x;
		switch (menu = SelectMenu()) {
		 case Insert: x = Read("�擪�ɑ}��");
					  InsertNode(&list, x.no, x.name);
					  break;
		 case Append: x = Read("�����ɒǉ�");
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

	TermList(&list);			/* ���`���X�g�̗��p���I�� */

	return 0;
}
