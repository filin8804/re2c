/* Generated by re2c */

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = yyt3 = YYCURSOR;
		goto yy3;
	default:
		yyt2 = yyt3 = NULL;
		yyt1 = YYCURSOR;
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
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy3;
	default:
		yyt2 = YYCURSOR;
		goto yy2;
	}
}

re2c: warning: line 5: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 3 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 6: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
