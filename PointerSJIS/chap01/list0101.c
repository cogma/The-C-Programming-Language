/* �I�u�W�F�N�g�̒l�ƃA�h���X��\�� */

#include <stdio.h>

int main(void)
{
	int n1 = 15;	/* n1��int�^�̃I�u�W�F�N�g */
	int n2 = 73;	/* n2��int�^�̃I�u�W�F�N�g */

	printf("n1�̒l��%d\n", n1);			/* n1�̒l��\�� */
	printf("n2�̒l��%d\n", n2);			/* n2�̒l��\�� */

	printf("n1�̃A�h���X��%p\n", &n1);	/* n1�̃A�h���X��\�� */
	printf("n2�̃A�h���X��%p\n", &n2);	/* n2�̃A�h���X��\�� */

	return 0;
}
