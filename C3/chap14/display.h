/*
	画面制御ライブラリ（エスケープシーケンス／Win32API）ヘッダ"display.h"
*/

#ifndef __DISPLAY
#define __DISPLAY

enum {
	BLACK,				/* 黒 */
	BLUE,				/* 青 */
	RED,				/* 赤 */
	GREEN,				/* 緑 */
	MAGENTA,			/* 赤紫 */
	CYAN,				/* 水色 */
	YELLOW,				/* 黄色 */
	WHITE,				/* 白 */
	GRAY,				/* 灰色 */
	BRIGHT_BLUE,		/* 明るい青 */
	BRIGHT_RED,			/* 明るい赤 */
	BRIGHT_GREEN,		/* 明るい緑 */
	BRIGHT_MAGENTA,		/* 明るい赤紫 */
	BRIGHT_CYAN,		/* 明るい水色 */
	BRIGHT_YELLOW,		/* 明るい黄色 */
	BRIGHT_WHITE		/* 輝く白 */
};

/*--- 画面消去 ---*/
void cls(void);

/*--- カーソル位置を(__x, __y)に設定 ---*/
void locate(int __x, int __y);

/*--- 文字色を__fgに背景色を__bgに設定 ---*/
void colorx(int __fg, int __bg);

/*---  文字色を__colに設定 ---*/
void color(int __col);

#endif
