/*
	�s����̐擪�̃����o�̕��сt�������p�̗̂��p��
*/

#include <stdio.h>

/*--- �����i���^�L�j���p�� ---*/
typedef union {
	struct {
		int type;			/* ��� */
	} code;

	struct {
		int  type;			/* 1:�� */
		char *name;			/* ���O */
	} dog;

	struct {
		int    type;		/* 2:�L */
		double weight;		/* �̏d */
	} cat;
} Animal;

/*--- �����̃f�[�^����ʂɉ����ĕ\�� ---*/
void print_animal(const Animal *x)
{
	switch (x->code.type) {
	 case 1: printf("���B���O��%s�ł��B\n",   x->dog.name);      break;
	 case 2: printf("�L�B�̏d��%.1fkg�ł��B\n", x->cat.weight);  break;
	}
} 

int main(void)
{
	Animal a, b;

	a.dog.type = 1;				/* a�͌��ŁA	*/
	a.dog.name = "Taro";		/* ���O��"Taro"	*/

	b.cat.type   = 2;			/* b�͔L�ŁA	*/
	b.cat.weight = 3.5;			/* �̏d��3.5kg	*/

	print_animal(&a);			/* a��\�� */

	print_animal(&b);			/* b��\�� */

	return 0;
}
