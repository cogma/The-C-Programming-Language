/* �����̒l�ƃ|�C���^�̒l��\�� */

#include <stdio.h>

int main(void)
{
	int n;			/* n��int�^�i�����j*/
	int *ptr;		/* ptr��int *�^�i�|�C���^�j*/

	n = 57;			/* n��57���� */
	ptr = &n;		/* ptr��n�̃A�h���X���� */

	printf(" n �̒l��%d\n", n);			/* n�̒l��\�� */
	printf("&n �̒l��%p\n", &n);		/* n�̃A�h���X��\�� */
	printf("ptr�̒l��%p\n", ptr);		/* ptr�̒l��\�� */

	return 0;
}
