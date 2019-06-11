/*
	�Q���T���؂̎�����
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN  128			/* ���O�̔z�� */

/*--- ���j���[ ---*/
typedef enum {
	Term, Insert, Search, Print
} Menu;

/*--- �Q���؂̃m�[�h ---*/
typedef struct __bnode {
	char name[MAX_LEN];			/* ���O */
	struct __bnode *left;		/* ���̎q�m�[�h�ւ̃|�C���^ */
	struct __bnode *right;		/* �E�̎q�m�[�h�ւ̃|�C���^ */
} BinNode;

/*--- �m�[�h�̊m�� ---*/
BinNode *AllocNode(void)
{
	return calloc(1, sizeof(BinNode));
}

/*--- �m�[�h�̑}�� ---*/
BinNode *InsertNode(BinNode *p, const BinNode *w)
{
	int cond;

	if (p == NULL) {
		p = AllocNode();
		strcpy(p->name, w->name);
		p->left = p->right = NULL;
	} else if ((cond = strcmp(w->name, p->name)) == 0)
		printf("�y�G���[�z%s�͊��ɓo�^����Ă��܂��B\n", w->name);
	else if (cond < 0)
		p->left	 = InsertNode(p->left, w);		/* ���̎q�ɒ��� */
	else
		p->right = InsertNode(p->right, w);		/* �E�̎q�ɒ��� */
	return p;
}

/*--- �m�[�h�̒T�� ---*/
void SearchNode(BinNode *p, const BinNode *w)
{
	int cond;

	if (p == NULL)
		printf("%s�͓o�^����Ă��܂���B\n", w->name);
	else if ((cond = strcmp(w->name, p->name)) == 0)
		printf("%s�͓o�^����Ă��܂��B\n",   w->name);
	else if (cond < 0)
		SearchNode(p->left,  w);				/* �������؂���T�� */
	else
		SearchNode(p->right, w);				/* �E�����؂���T�� */
}

/*--- �؂̑S�v�f���L�[�l�̏����ɕ\�� ---*/
void PrintTree(const BinNode *p)
{
	if (p != NULL) {
		PrintTree(p->left);						/* p�̍������؂�\�� */
		printf("%s\n", p->name);				/* p��\�� */
		PrintTree(p->right);					/* p�̉E�����؂�\�� */
	}
}

/*--- �؂̑S�v�f����� ---*/
void FreeTree(BinNode *p)
{
	if (p != NULL) {
		FreeTree(p->left);						/* p�̍������؂���� */
		FreeTree(p->right);						/* p�̉E�����؂���� */
		free(p);								/* p����� */
	}
}

/*--- �f�[�^�̓��� ---*/
BinNode Read(const char *message)
{
	BinNode temp;

	printf("%s���閼�O����͂��Ă������� : ", message);
	scanf("%s", temp.name);
	return temp;
}

/*--- ���j���[�I�� ---*/
Menu SelectMenu(void)
{
	int ch;

	do {
		printf("\n(1)�}��  (2)�T��  (3)�\��  (0)�I�� : ");
		scanf("%d", &ch);
	} while (ch < Term	||	ch > Print);
	return (Menu)ch;
}

/*--- ���C���֐� ---*/
int main(void)
{
	Menu    menu;
	BinNode *root;			/* ���ւ̃|�C���^ */

	root = NULL;
	do {
		BinNode x;
		switch (menu = SelectMenu()) {
		 case Insert :	x = Read("�}��");
						root = InsertNode(root, &x);
						break;
		 case Search :	x = Read("�T��");
						SearchNode(root, &x);
						break;
		 case Print	 :	puts("--- �ꗗ�\ ---");
						PrintTree(root);
						break;
		}
	} while (menu != Term);

	FreeTree(root);			/* ���ׂẴm�[�h����� */

	return 0;
}
