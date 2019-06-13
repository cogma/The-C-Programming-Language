/* �I�΂ꂽ�����̖�����\���i���̂P�j*/

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
	int temp;

	do {
		printf("(0)�c���@(1)�c�L�@(2)�c���@(3)�c�I���F");
		scanf("%d", &temp);
	} while (temp < Dog || temp > Invalid);
	return temp;
}

int main(void)
{
	Animal selected;

	do {
		selected = select();	/* ������I�� */
		switch (selected) {
		 case Dog :    dog();     break;		/* �� */
		 case Cat :    cat();     break;		/* �L */
		 case Monkey : monkey();  break;		/* �� */
		}
	} while (selected != Invalid);

	return 0;
}
