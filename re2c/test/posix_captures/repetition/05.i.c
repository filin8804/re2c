/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	if (yych >= 0x01) {
		yyt1 = YYCURSOR;
		goto yy3;
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
	if (yych >= 0x01) {
		yyt2 = yyt5 = YYCURSOR;
		goto yy5;
	}
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	if (yych >= 0x01) {
		yyt2 = yyt3 = yyt5 = YYCURSOR;
		goto yy7;
	}
	yyt3 = yyt4 = NULL;
	yyt6 = YYCURSOR;
yy6:
	{
		const size_t yynmatch = 4;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = yyt1;
		yypmatch[4] = yyt3;
		yypmatch[5] = yyt4;
		yypmatch[6] = yyt5;
		yypmatch[7] = yyt6;
		yypmatch[1] = YYCURSOR;
		yypmatch[2] = yyt2;
		yypmatch[3] = YYCURSOR;
		{}
	}
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt3 = yyt4 = NULL;
		yyt6 = YYCURSOR;
		goto yy6;
	}
	++YYCURSOR;
	yyt5 = yyt6 = NULL;
	yyt4 = YYCURSOR;
	goto yy6;
}

re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 3 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 3 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
