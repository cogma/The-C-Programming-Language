/*
	�z��ɂ����`���X�g�̎�����
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Null  -1			/* ��C���f�b�N�X */

typedef enum {
	Term, Insert, Append, Delete, Print, Clear
} Menu;

typedef int  Index;			/* �C���f�b�N�X�^ */

/*--- �m�[�h ---*/
typedef struct {
	int   no;			/* ����ԍ� */
	char  name[10];		/* ���O */
	Index next;			/* �㑱�v�f�̃C���f�b�N�X */
	Index Dnext;		/* �폜���X�g�|�C���^ */
} Node;

/*--- ���`���X�g ---*/
typedef struct {
	Node  *n;			/* ���X�g�{�́i�z��j */
	Index top;			/* ���X�g�̐擪�v�f�̃C���f�b�N�X */
	Index max;			/* ���p���R�[�h�̍ő�C���f�b�N�X */
	Index deleted;		/* �폜���X�g�̐擪�v�f�̃C���f�b�N�X */
} List;

#define Top     (list->top)				/* ���X�g�̐擪 */

#define Second  (list->n[Top].next)		/* ���X�g�̂Q�Ԗ� */

#define Next(x) (list->n[(x)].next)		/* ���R�[�hx�̌㑱�v�f */

/*--- �m�[�h�̊e�����o�ɒl��ݒ� ----*/
void SetNode(Node *x, int no, const char *name, Index next)
{
	x->no	= no;
	x->next = next;
	strcpy(x->name, name);
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
	if (list->deleted == Null) {		/* �폜���R�[�h���Ȃ��ꍇ */
		list->deleted = idx;
		list->n[idx].Dnext = Null;
	} else {
		Index ptr = list->deleted;
		list->deleted = idx;
		list->n[idx].Dnext = ptr;
	}
}

/*--- �擪�Ƀm�[�h��}�� ---*/
void InsertNode(List *list, int no, const char *name)
{
	Index ptr = Top;
	Top = GetIndex(list);
	SetNode(&list->n[Top], no, name, ptr);
}

/*--- �����Ƀm�[�h��ǉ� ---*/
void AppendNode(List *list, int no, const char *name)
{
	if (Top == Null)						/* ���X�g����ł���� */
		InsertNode(list, no, name);			/* �擪�ɑ}�� */
	else {
		Index ptr = Top;
		while (Next(ptr) != Null)			/* �����m�[�h�������� */
			ptr = Next(ptr);
		Next(ptr) = GetIndex(list);
		SetNode(&list->n[Next(ptr)], no, name, Null);
	}
}

/*--- �擪�m�[�h���폜 ---*/
void DeleteNode(List *list)
{
	if (Top != Null) {						/* ���X�g����łȂ���� */
		Index ptr = Second;
		DeleteIndex(list, Top);
		Top = ptr;
	}
}

/*--- ���ׂẴm�[�h���폜 ---*/
void ClearList(List *list)
{
	while (Top != Null)					/* ���X�g����ɂȂ�܂� */
		DeleteNode(list);				/* �擪�m�[�h���폜 */
}

/*--- ���ׂẴm�[�h��\�� ---*/
void PrintList(List *list)
{
	Index ptr = Top;

	puts("�y�ꗗ�\�z");
	while (ptr != Null) {
		printf("%5d %-10.10s\n", list->n[ptr].no, list->n[ptr].name);
		ptr = Next(ptr);
	}
}

/*--- ���`���X�g�̏����� ---*/
void InitList(List *list, int size)
{
	/* �v�f�^��Node�ŗv�f����size�̔z�����x�Ɋm�� */
	list->n = calloc(size, sizeof(Node));
	list->top = list->max = list->deleted = Null;
}

/*--- ���`���X�g�̌�n�� ---*/
void TermList(List *list)
{
	ClearList(list);				/* ���ׂẴm�[�h���폜 */
	free(list->n);
}

/*--- �f�[�^�̓��� ---*/
Node Read(const char *message)
{
	Node temp;

	printf("%s����f�[�^����͂��Ă��������B\n", message);

	printf("�ԍ��F");	scanf("%d", &temp.no);
	printf("���O�F");	scanf("%s", temp.name);

	return temp;
}

/*--- ���j���[�I�� ---*/
Menu SelectMenu(void)
{
	int ch;

	do {
		printf("\n(1) �擪�Ƀm�[�h��}��   (2) �����Ƀm�[�h��ǉ�\n");
		printf("(3) �擪�̃m�[�h���폜   (4) �S�m�[�h��\��\n");
		printf("(5) �S�m�[�h���폜       (0) ��   ��    �I   �� �F ");
		scanf("%d", &ch);
	} while (ch < Term || ch > Clear);
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
		 case Print : PrintList(&list);
					  break;
		 case Clear : ClearList(&list);
					  break;
		}
	} while (menu != Term);

	TermList(&list);			/* ���`���X�g�̗��p���I�� */

	return 0;
}
