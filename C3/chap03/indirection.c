/*
	�|�C���^��ʂ��ăI�u�W�F�N�g�̒l���ԐړI�ɕύX
*/

#include <stdio.h>

int main(void)
{
	int x = 5;		/* �T�[�N��x��5�l */
	int y = 3;		/* �T�[�N��y��3�l */
	int *ptr;

	ptr = &x;						/* ptr��x���w�� */
	printf("x    = %d\n", x);
	printf("y    = %d\n", y);
	printf("ptr  = %p\n", ptr);		/* ptr���w���A�h���X */
	printf("*ptr = %d\n\n", *ptr);	/* ptr���w���ϐ��̒l */

	ptr = &y;						/* ptr��y���w�� */
	*ptr = 4;						/* ptr��ʂ��ăT�[�N��y�̐l����ύX */
	printf("x    = %d\n", x);
	printf("y    = %d\n", y);
	printf("ptr  = %p\n", ptr);		/* ptr���w���A�h���X */
	printf("*ptr = %d\n", *ptr);	/* ptr���w���ϐ��̒l */

	return 0;
}
