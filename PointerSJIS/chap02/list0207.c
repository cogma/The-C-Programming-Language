/* �z��̎�n���i���̂P�j*/

#include <stdio.h>

/*--- �z��̐擪3�v�f��1,2,3���� ---*/
void set123(int a[])
{
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
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
