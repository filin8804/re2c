/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'y':
		yyt1 = yyt2 = YYCURSOR;
		goto yy3;
	default:	goto yy2;
	}
yy2:
	{
		const size_t yynmatch = 1;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = YYCURSOR;
		yypmatch[1] = YYCURSOR;
		{}
	}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'y':
		yyt2 = YYCURSOR;
		goto yy5;
	default:	goto yy4;
	}
yy4:
	{
		const size_t yynmatch = 2;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = yyt1;
		yypmatch[1] = YYCURSOR;
		yypmatch[2] = yyt2;
		yypmatch[3] = YYCURSOR;
		{}
	}
yy5:
	++YYCURSOR;
	goto yy4;
}

re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
