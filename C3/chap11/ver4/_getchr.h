/*
	１文字入出力ライブラリ《内部ヘッダ》"_getchr.h"
*/

#ifndef __GETCHR_
#define __GETCHR_

#define __BUFSIZE  256

extern char __buffer[__BUFSIZE];	/* バッファ */
extern int __buf_no;				/* 現在の要素数 */
extern int __front;					/* 先頭要素カーソル */
extern int __rear;					/* 末尾要素カーソル */

#endif
