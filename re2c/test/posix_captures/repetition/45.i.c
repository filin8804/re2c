/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	if (yych >= 0x01) {
		yyt3 = yyt6 = YYCURSOR;
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
		yyt4 = yyt5 = NULL;
		yyt7 = yyt8 = yyt11 = YYCURSOR;
		goto yy5;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy4;
	yyt2 = yyt9 = yyt10 = NULL;
	yyt1 = yyt12 = yyt13 = yyt15 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych >= 0x01) {
		yyt9 = yyt10 = NULL;
		yyt12 = yyt13 = yyt15 = YYCURSOR;
		goto yy8;
	}
	yyt1 = yyt14 = NULL;
	yyt2 = YYCURSOR;
yy7:
	{
		const size_t yynmatch = 10;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[2] = yyt3;
		yypmatch[4] = yyt4;
		yypmatch[5] = yyt5;
		yypmatch[6] = yyt6;
		yypmatch[7] = yyt7;
		yypmatch[8] = yyt8;
		yypmatch[10] = yyt9;
		yypmatch[11] = yyt10;
		yypmatch[12] = yyt11;
		yypmatch[13] = yyt12;
		yypmatch[14] = yyt13;
		yypmatch[16] = yyt14;
		yypmatch[17] = yyt1;
		yypmatch[18] = yyt15;
		yypmatch[19] = yyt2;
		yypmatch[0] = yyt3;
		yypmatch[1] = YYCURSOR;
		yypmatch[3] = yyt8;
		yypmatch[9] = yyt13;
		yypmatch[15] = YYCURSOR;
		{}
	}
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt4 = yyt3;
		yyt5 = yyt1;
		yyt6 = yyt2;
		yyt7 = yyt2;
		yyt8 = yyt1;
		yyt11 = yyt1;
		yyt1 = yyt14 = NULL;
		yyt2 = YYCURSOR;
		goto yy7;
	}
	yyt11 = yyt12 = NULL;
	yyt10 = yyt13 = yyt14 = yyt15 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt4 = yyt3;
		yyt5 = yyt1;
		yyt6 = yyt2;
		yyt7 = yyt2;
		yyt8 = yyt1;
		yyt9 = yyt1;
		yyt1 = yyt14 = NULL;
		yyt2 = YYCURSOR;
		goto yy7;
	}
	++YYCURSOR;
	yyt4 = yyt3;
	yyt5 = yyt1;
	yyt6 = yyt2;
	yyt7 = yyt2;
	yyt8 = yyt1;
	yyt9 = yyt1;
	yyt2 = yyt15 = NULL;
	yyt1 = YYCURSOR;
	goto yy7;
}

re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 3 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 3 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
