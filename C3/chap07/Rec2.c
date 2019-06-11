/*
	化学物質データベース用構造体の定義（部分：改良後）
*/

typedef char Form[16];		/* 分子式 */
typedef char Name[65];		/* 物質名 */

typedef struct {
	Form form;				/* 分子式 */
	Name name;				/* 物質名 */
} FormName;

typedef struct {
	/* … 中略 … */
	FormName compA;			/* 成分Ａ */
	FormName compB;			/* 成分Ｂ */
	/* … 中略 … */
} Rec;
