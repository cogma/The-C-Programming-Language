/* �|�C���^��ʂ��ĊԐړI�ɃI�u�W�F�N�g�ɒl���� */

#include <stdio.h>

int main(void)
{
	int sw;
	int n1 = 15;
	int n2 = 73;
	int *p;

	printf("n1��%d��n2��%d�ł��B\n", n1, n2);
	printf("�ǂ�����ύX(n1�c1�^n2�c2)�F");
	scanf("%d", &sw);

	if (sw == 1)
		p = &n1;	/* p��n1�̃A�h���X�����Fp��n1���w�� */
	else
		p = &n2;	/* p��n2�̃A�h���X�����Fp��n2���w�� */

	*p = 99;		/* p���w���I�u�W�F�N�g��99���� */

	printf("n��%d��n2��%d�ł��B\n", n1, n2);

	return 0;
}
