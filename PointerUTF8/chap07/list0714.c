/*--- 文字列sの複製を生成して返却 ---*/
char *str_dup(const char *s)
{
	char *p = malloc(strlen(s) + 1);
	return (p == NULL) ? NULL : strcpy(p, s);
}
