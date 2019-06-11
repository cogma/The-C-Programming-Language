/*
	�X�^�b�N�̎�����
*/

#include <stdio.h>
#include <stdlib.h>

/*--- �X�^�b�N����������\���� ---*/
typedef struct {
	int max;		/* �X�^�b�N�̗e�� */
	int ptr;		/* �X�^�b�N�|�C���^ */
	int *stk;		/* �X�^�b�N�{�́i�擪�v�f�ւ̃|�C���^�j*/
} Stack;

/*--- �X�^�b�N�̏����E������ ---*/
int StackAlloc(Stack *s, int max)
{
	s->ptr = 0;
	if ((s->stk = calloc(max, sizeof(int))) == NULL) {	/* �z��̊m�ۂɎ��s */
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}

/*--- �X�^�b�N�̌�n�� ---*/
void StackFree(Stack *s)
{
	if (s->stk != NULL) {			/* �X�^�b�N����������������Ă���� */
		free(s->stk);				/* �z������ */
		s->max = s->ptr = 0;
	}
}

/*--- �X�^�b�N�Ƀf�[�^���v�b�V�� ---*/
int StackPush(Stack *s, int x)
{
	if (s->ptr >= s->max)					/* �X�^�b�N�����t */
		 return -1;
	s->stk[s->ptr++] = x;
	return 0;
}

/*--- �X�^�b�N����f�[�^���|�b�v ---*/
int StackPop(Stack *s, int *x)
{
	if (s->ptr <= 0)						/* �X�^�b�N���� */
		return -1;
	*x = s->stk[--s->ptr];
	return 0;
}

/*--- �X�^�b�N����f�[�^���s�[�N ---*/
int StackPeek(const Stack *s, int *x)
{
	if (s->ptr <= 0)						/* �X�^�b�N���� */
		return -1;
	*x = s->stk[s->ptr - 1];
	return 0;
}

/*--- �X�^�b�N�̗e�� ---*/
int StackSize(const Stack *s)
{
	return s->max;
}

/*--- �X�^�b�N�ɐς܂�Ă���f�[�^�� ---*/
int StackNo(const Stack *s)
{
	return s->ptr;
}

/*--- �X�^�b�N�͋� ---*/
int StackIsEmpty(const Stack *s)
{
	return s->ptr <= 0;
}

/*--- �X�^�b�N�͖��t�� ---*/
int StackIsFull(const Stack *s)
{
	return s->ptr >= s->max;
}

/*--- �X�^�b�N����ɂ��� ---*/
void StackClear(Stack *s)
{
	s->ptr = 0;
}

int main(void)
{
	Stack stk;

	if (StackAlloc(&stk, 100) == -1) {
		puts("�X�^�b�N�̊m�ۂɎ��s���܂����B");
		return 1;
	}
	while (1) {
		int m, x;

		printf("���݂̃f�[�^���F%d/%d\n", StackNo(&stk), StackSize(&stk));
		printf("(1) �v�b�V��  (2) �|�b�v�@(0) �I���F");
		scanf("%d", &m);
		if (m == 0) break;

		switch (m) {
		 case 1: printf("�f�[�^�F");  scanf("%d", &x);
				 if (StackPush(&stk, x) == -1)
					puts("�v�b�V���ł��܂���B");
				 break;

		 case 2: if (StackPop(&stk, &x) == -1)
					puts("�|�b�v�ł��܂���B");
				 else
					printf("�|�b�v�����f�[�^��%d�ł��B\n", x);
				 break;
		}
	}
	StackFree(&stk);

	return 0;
}
