/*
	�����񃊃e������]�������l��\��
*/

#include <stdio.h>

int main(void)
{
	char *ptr = "ABCD";				/* �擪�����ւ̃|�C���^�ŏ����� */

	printf("ptr  = %s\n", ptr);		/* ptr���擪�������w�������� */
	printf("ptr  = %p\n", ptr);		/* ptr���̂��́i�A�h���X�j */
	printf("*ptr = %c\n", *ptr);	/* ptr���w������ */

	return 0;
}
