/*
	���w�����f�[�^�x�[�X�p�\���̂̒�`�i�����F���ǌ�j
*/

typedef char Form[16];		/* ���q�� */
typedef char Name[65];		/* ������ */

typedef struct {
	Form form;				/* ���q�� */
	Name name;				/* ������ */
} FormName;

typedef struct {
	/* �c ���� �c */
	FormName compA;			/* �����` */
	FormName compB;			/* �����a */
	/* �c ���� �c */
} Rec;
