/* �I�΂ꂽ�����̖�����\���i���̂Q�F�֐��ւ̃|�C���^�̔z��j*/

#include <stdio.h>

typedef enum {Dog, Cat, Monkey, Invalid} Animal;

/*--- ������ ---*/
void dog(void)
{
	puts("��������!!");
}

/*--- �L���� ---*/
void cat(void)
{
	puts("�j���`�I!!");
}

/*--- ������ ---*/
void monkey(void)
{
	puts("�L�b�L�b!!");
}

/*--- ������I�� ---*/
Animal select(void)
{
	int tmp;

	do {
		printf("(0)�c���@(1)�c�L�@(2)�c���@(3)�c�I���F");
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);
	return tmp;
}

int main(void)
{
	typedef void (*AnimalFP)(void);
	Animal selected;
	AnimalFP afp[] = {dog, cat, monkey};

	do {
		selected = select();	/* ������I�� */
		if (selected >= Dog && selected < Invalid)
			afp[selected]();
	} while (selected != Invalid);

	return 0;
}

