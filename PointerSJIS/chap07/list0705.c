/* �|�C���^�̌^�ϊ��Ƌ��E���� */

#include <stdio.h>

int main(void)
{
	double x;
	double *pd;

	char   *pc = &x;	/* double�^�I�u�W�F�N�gx�̐擪�A�h���X���w�� */

	pc++;				/* �A�h���X�l��1�������₷ */

	pd = (double *)pc;	/* ���₳�ꂽ�|�C���^��double�^�|�C���^�ɖ߂� */

	printf("pc = %p\n", pc);
	printf("pd = %p\n", pd);

	return 0;
}
