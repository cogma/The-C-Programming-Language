/* �z��̎�n���i���̂Q�j*/

#include <stdio.h>

/*--- �z��̐擪3�v�f��1,2,3���� ---*/
void set123(int *a)
{
	*a       = 1;		/* a[0] = 1;�Ɠ��� */
	*(a + 1) = 2;		/* a[1] = 2;�Ɠ��� */
	*(a + 2) = 3;		/* a[2] = 3;�Ɠ��� */
}

int main(void)
{
	int i;
	int x[5] = {0};		/* �S�v�f��0�ŏ����� */

	set123(x);

	for (i = 0; i < 5; i++)
		printf("x[%d] = %d\n", i, x[i]);	/* x[i]�̒l��\�� */

	return 0;
}
