/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = yyt3 = YYCURSOR;
		goto yy3;
	default:
		yyt1 = yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
yy2:
	{
		const size_t yynmatch = 2;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = yyt1;
		yypmatch[3] = yyt2;
		yypmatch[1] = YYCURSOR;
		yypmatch[2] = yyt3;
		{}
	}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	yyt1 = yyt2 = yyt3 = YYCURSOR;
	goto yy2;
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy6;
	default:
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	default:	goto yy2;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt4 = YYCURSOR;
		goto yy8;
	default:
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy9;
	default:
		yyt3 = yyt2;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy10;
	default:
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:
		yyt3 = yyt4;
		yyt2 = YYCURSOR;
		goto yy2;
	}
}

re2c: warning: line 5: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 5: trailing context is non-deterministic and induces 4 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 6: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
