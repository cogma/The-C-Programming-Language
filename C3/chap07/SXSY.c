/*
	�\����SX�����SY�̐錾
*/

typedef struct __sy	 SY;	/* SY�̖��O�������Ƃ肠�����錾 */

typedef struct {
	int a;
	SY *b;					/* SY�̑��݂�m���Ă���̂ň��S���Đ錾 */
} SX;

typedef struct __sy {
	int c;
	SX  d;					/* SX�̓��e��m���Ă���̂ň��S���Đ錾 */
} SY;
