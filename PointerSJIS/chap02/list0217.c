/* ���`�T���i��P�Łj*/

#include <stdio.h>

/*--- �z��a�̐擪n�̗v�f����lkey����`�T���i��P�Łj---*/
int seq_search(int *a, int n, int key)
{
	int i;

	for (i = 0; i < n; i++)
		if (*a++ == key)		/* �T������ */
			return i;
	return -1;					/* �T�����s */
}

int main(void)
{
	int i, key, idx;
	int x[7];
	int x_size = sizeof(x) / sizeof(x[0]);		/* �z��x�̗v�f�� */

	for (i = 0; i < x_size; i++) {
		printf("x[%d]�F", i);					/* x[i]�̓��͂𑣂� */
		scanf("%d", &x[i]);
	}
	printf("�T���l�́F");
	scanf("%d", &key);

	if ((idx = seq_search(x, x_size, key)) != -1)
		printf("���̒l�����v�f��x[%d]�ł��B\n", idx);
	else
		puts("������܂���ł����B");

	return 0;
}
