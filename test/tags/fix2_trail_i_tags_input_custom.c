/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --input custom
#include <stddef.h>
#include <stdio.h>

static void lex(const char *s)
{
#define YYPEEK()           *s
#define YYSKIP()           ++s
#define YYBACKUP()         marker = s
#define YYRESTORE()        s = marker
#define YYSTAGP(t)         t = s
#define YYSTAGN(t)         t = NULL
#define YYRESTORETAG(t)    s = t
#define YYSHIFT(o)         s += o
#define YYSHIFTSTAG(t, o)  t += o
    const char *marker, *p0, *p1, *p2, *p3;
    
    
{
	char yych;
	yych = YYPEEK();
	switch (yych) {
	case '0':	goto yy4;
	default:	goto yy2;
	}
yy2:
	YYSKIP();
yy3:
	{ printf("error\n"); return; }
yy4:
	YYSKIP();
	YYBACKUP();
	yych = YYPEEK();
	switch (yych) {
	case '1':	goto yy5;
	default:	goto yy3;
	}
yy5:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '1':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYRESTORE();
	goto yy3;
yy7:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '2':	goto yy8;
	default:	goto yy6;
	}
yy8:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '2':	goto yy9;
	default:	goto yy6;
	}
yy9:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '2':	goto yy10;
	default:	goto yy6;
	}
yy10:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '3':	goto yy11;
	default:	goto yy6;
	}
yy11:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '3':	goto yy12;
	default:	goto yy6;
	}
yy12:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '3':	goto yy13;
	default:	goto yy6;
	}
yy13:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '3':	goto yy14;
	default:	goto yy6;
	}
yy14:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '4':	goto yy15;
	default:	goto yy6;
	}
yy15:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '4':	goto yy16;
	default:	goto yy6;
	}
yy16:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '4':	goto yy17;
	default:	goto yy6;
	}
yy17:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '4':	goto yy18;
	default:	goto yy6;
	}
yy18:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
	case '4':	goto yy19;
	default:	goto yy6;
	}
yy19:
	YYSKIP();
	YYSHIFT(-5);
	YYSTAGP(p0);
	YYSHIFTSTAG(p0, -10);
	YYSTAGP(p1);
	YYSHIFTSTAG(p1, -9);
	YYSTAGP(p2);
	YYSHIFTSTAG(p2, -7);
	YYSTAGP(p3);
	YYSHIFTSTAG(p3, -4);
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%s'\n",
                p1 - p0, p0,
                p2 - p1, p1,
                p3 - p2, p2,
                s - p3, p3,
                s);
                return;
        }
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}