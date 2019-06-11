/*
	１文字入出力ライブラリ《公開ヘッダ》"getchr.h"
*/

#ifndef __GETCHR
#define __GETCHR

/*----- 関数原型宣言 ----*/
int getchr(void);					/* １文字取り出す */
int ungetchr(int __ch);				/* １文字押し戻す */

#endif
