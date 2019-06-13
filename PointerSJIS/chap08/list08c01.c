/* �I�΂ꂽ�����̖�����\�� */

#include <stdio.h>

typedef enum {Dog, Cat, Monkey, Invalid} Animal;

/*--- ������ ---*/
void dog(void) { puts("��������!!"); }

/*--- �L���� ---*/
void cat(void) { puts("�j���`�I!!"); }

/*--- ������ ---*/
void monkey(void) { puts("�L�b�L�b!!"); }

/*--- ������I�ԁi�I�΂ꂽ�֐��ւ̃|�C���^��ԋp�j ---*/
void (*selected_animal(void))(void)
{
	int temp;

	while (1) {
		printf("(0)�c���@(1)�c�L�@(2)�c���@(3)�c�I���F");
		scanf("%d", &temp);
		switch (temp) {
		 case Dog :     return dog;			/* �֐�dog�ւ̃|�C���^��ԋp */
		 case Cat :     return cat;			/* �֐�cat�ւ̃|�C���^��ԋp */	
		 case Monkey :  return monkey;		/* �֐�monkey�ւ̃|�C���^��ԋp */
		 case Invalid : return NULL;		/* ��|�C���^��ԋp */	
		}
	}
}

int main(void)
{
	while (1) {
		void (*animal)(void) = selected_animal();
		if (animal == NULL)		/* ��|�C���^�ł���ΏI�� */
			break;
		animal();				/* animal���w���֐����Ăяo�� */
	}

	return 0;
}