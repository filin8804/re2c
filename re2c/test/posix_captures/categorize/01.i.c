/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = yyt2 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt3 = yyt4 = NULL;
		yyt1 = yyt2 = yyt5 = YYCURSOR;
		goto yy5;
	default:
		yyt3 = yyt4 = NULL;
		yyt1 = yyt2 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy2:
	{
		const size_t yynmatch = 4;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[2] = yyt1;
		yypmatch[3] = yyt2;
		yypmatch[5] = yyt3;
		yypmatch[6] = yyt5;
		yypmatch[0] = yyt1;
		yypmatch[1] = YYCURSOR;
		yypmatch[4] = yyt4;
		yypmatch[7] = YYCURSOR;
		{}
	}
yy3:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt3 = yyt4 = NULL;
		yyt5 = YYCURSOR;
		goto yy7;
	default:
		yyt3 = yyt4 = NULL;
		yyt2 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy5;
	default:	goto yy2;
	}
yy7:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt6 = YYCURSOR;
		goto yy8;
	case 'b':
		yyt2 = yyt5;
		goto yy5;
	default:
		yyt2 = yyt5;
		goto yy2;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy10;
	default:	goto yy9;
	}
yy9:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt2 = yyt5;
		goto yy2;
	} else {
		yyt3 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy10:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt4 = yyt6;
		yyt6 = YYCURSOR;
		goto yy8;
	case 'b':
		yyt4 = yyt6;
		yyt3 = yyt5 = YYCURSOR;
		goto yy5;
	default:
		yyt4 = yyt6;
		yyt3 = yyt5 = YYCURSOR;
		goto yy2;
	}
}

re2c: warning: line 5: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 6: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
