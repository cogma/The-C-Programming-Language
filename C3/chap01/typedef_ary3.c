/*
	typedef���ɂ��s���S�Ȕz��̏��������m�F�i�G���[�j
*/

#include <stdio.h>

int main(void)
{
	int i;
	typedef int IntAry[];		/* �v�f�^��int�̔z��^ */
	IntAry a = {1, 2, 3};			/* �v�f����3 */
	IntAry b = {1, 2, 3, 4, 5};		/* �v�f����5 */
	IntAry c;						/* �G���[ */

	for (i = 0; i < 3; i++)
		printf("a[%d] = %d\n", i, a[i]);

	for (i = 0; i < 5; i++)
		printf("b[%d] = %d\n", i, b[i]);

	return 0;
}
