/* �Q�����z��Ɨv�f�E�\���v�f�̑傫����\�� */

#include <stdio.h>

int main(void)
{
	int a[4][3];

	printf("sizeof(a)       = %u\n", (unsigned)sizeof(a));		 /* �z�� */
	printf("sizeof(a[0])    = %u\n", (unsigned)sizeof(a[0]));	 /* �v�f */
	printf("sizeof(a[0][0]) = %u\n", (unsigned)sizeof(a[0][0])); /* �\���v�f */

	printf("�z��a��%d�s%d��̂Q�����z��ł��B\n",
				(int)(sizeof(a)    / sizeof(a[0])),			/* �s�� */
				(int)(sizeof(a[0]) / sizeof(a[0][0])));		/* �� */
	printf("�\���v�f��%d�ł��B\n",
				(int)(sizeof(a)    / sizeof(a[0][0])));		/* �\���v�f�� */
	return 0;
}
