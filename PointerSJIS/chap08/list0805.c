/* �v���O�����I�����Ƀ��b�Z�[�W�Ǝ�����\�� */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*--- �I�����b�Z�[�W�\�� ----*/
void good_bye(void)
{
	puts("�v���O��������I���I");
}

/*--- ���݂̎�����\�� ---*/
void put_time(void)
{
	time_t current = time(NULL);			/* ���݂̎������擾 */
	struct tm *lctm = localtime(&current);	/* �n�����̍\���̂ɕϊ� */

	printf("%02d:%02d:%02d\n", lctm->tm_hour, lctm->tm_min, lctm->tm_sec);
}

int main(void)
{
	int x;

	atexit(good_bye);	/* �֐�good_bye��o�^ */
	atexit(put_time);	/* �֐�put_time��o�^ */

	printf("(0)�c�����I�� (1)�c���s�I���F");
	scanf("%d", &x);

	if (x) abort();		/* ���s�I���i�o�^�֐��͌Ăяo����Ȃ��j*/

	return 0;			/* �����I���i�o�^�֐��������I�ɌĂяo�����j*/
}
