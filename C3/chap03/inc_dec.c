/*
	�T�[�N���̐l���̑���
*/

#include <stdio.h>

/*--- �l������ ---*/
void increment(int *no)
{
	++*no;				/* *no�̒l������₷ */
}

/*--- �l������ ---*/
void decrement(int *no)
{
	--*no;				/* *no�̒l������炷 */
}

int main(void)
{
	int x = 5;			/* �T�[�N��x��5�l */
	int y = 3;			/* �T�[�N��y��3�l */

	increment(&x);		/* �T�[�N��x��1�l������ */
	decrement(&y);		/* �T�[�N��y��1�l������ */

	printf("�T�[�N��x�̏����l����%d\n", x);
	printf("�T�[�N��y�̏����l����%d\n", y);

	return 0;
}
