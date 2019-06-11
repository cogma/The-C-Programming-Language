/*
	化学物質データベース用構造体の定義（部分）
*/

typedef struct {
	/* … 中略 … */
	char formA[16];		/* 成分Ａの分子式 */
	char nameA[65];		/*    〃   物質名 */
	char formB[16];		/* 成分Ｂの分子式 */
	char nameB[65];		/*    〃   物質名 */
	/* … 中略 … */
} Rec;
