/* �|�C���^���w���I�u�W�F�N�g�̒l��\�� */

#include <stdio.h>

int main(void)
{
	int n;		/* n��int�^�i�����j*/
	int *ptr;	/* ptr��int *�^�i�|�C���^�j*/

	n = 57;		/* n��57���� */
	ptr = &n;	/* ptr��n�̃A�h���X���� */

	printf("n   �̒l��%d\n", n);		/* n�̒l��\�� */
	printf("*ptr�̒l��%d\n", *ptr);		/* ptr���w���I�u�W�F�N�g�̒l��\�� */

	return 0;
}
