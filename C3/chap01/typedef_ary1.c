/*
	typedef���ɂ��z��̏��������m�F
*/

#include <stdio.h>

int main(void)
{
	int i;
	typedef int Int5ary[5];		/* �v�f�^��int�ŗv�f����5�̔z��^�iint[5]�^�j*/
	Int5ary x = {1, 2, 3};

	for (i = 0; i < 5; i++)
		printf("x[%d] = %d\n", i, x[i]);

	return 0;
}
