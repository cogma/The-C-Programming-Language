/*
	�������q���^�����Ă��Ȃ��v�f��0�ŏ���������邱�Ƃ��m�F
*/

#include <stdio.h>

int main(void)
{
	int i;
	int b[3] = {1};		 /* �擪���珇��1,0,0�ŏ���������� */

	if (b[1] != 0 || b[2] != 0)
		puts("����������������Ă��܂���B");
	else
		for (i = 0; i < 3; i++)
			printf("b[%d] = %d\n", i, b[i]);

	return 0;
}
