/* ���`�T���i��Q�Łj*/

#include <stdio.h>

/*--- �z��a�̐擪n�̗v�f����lkey����`�T���i��Q�Łj---*/
int seq_search(int *a, int n, int key)
{
	int *p = a;

	while (n-- > 0) {
		if (*p == key)	/* �T������ */
			return p - a;
		else
			*p++;
	}
	return -1;			/* �T�����s */
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
