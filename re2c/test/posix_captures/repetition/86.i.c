/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 31) YYFILL(31);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = yyt2 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = yyt2 = YYCURSOR;
		goto yy5;
	case 'c':
		yyt1 = yyt2 = YYCURSOR;
		goto yy7;
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
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy8;
	case 'b':	goto yy9;
	case 'c':	goto yy10;
	default:	goto yy12;
	}
yy4:
	{
		const size_t yynmatch = 3;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = yyt2;
		yypmatch[4] = yyt3;
		yypmatch[1] = YYCURSOR;
		yypmatch[2] = yyt1;
		yypmatch[3] = yyt3;
		yypmatch[5] = YYCURSOR;
		{}
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy13;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0: 	goto yy2;
	case 1: 
		yyt3 = YYCURSOR;
		goto yy4;
	case 2: 
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	default:
		yyt1 = yyt4;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy7:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy8;
	case 'b':	goto yy14;
	case 'c':	goto yy10;
	default:	goto yy12;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy15;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy16;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy17;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy8;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy14;
	case 'c':
		yyt4 = YYCURSOR;
		goto yy18;
	case 'd':
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy10:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy15;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy19;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy17;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy12:
	switch (yych) {
	case 'd':	goto yy11;
	default:	goto yy4;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy7;
	default:	goto yy6;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy20;
	default:	goto yy6;
	}
yy15:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy21;
	case 'b':	goto yy22;
	case 'c':	goto yy23;
	default:	goto yy12;
	}
yy16:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy15;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy19;
	case 'c':
		yyt4 = YYCURSOR;
		goto yy24;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy17:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy21;
	case 'b':	goto yy25;
	case 'c':	goto yy23;
	default:	goto yy12;
	}
yy18:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy15;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy19;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy17;
	case 'd':	goto yy10;
	default:
		yyt1 = yyt4;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy26;
	default:	goto yy6;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy10;
	default:	goto yy6;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy27;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy28;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy29;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy22:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy21;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy25;
	case 'c':
		yyt4 = YYCURSOR;
		goto yy30;
	case 'd':
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy23:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy27;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy31;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy29;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy24:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy21;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy25;
	case 'c':
		yyt3 = YYCURSOR;
		goto yy23;
	case 'd':	goto yy17;
	default:
		yyt1 = yyt4;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy32;
	default:	goto yy6;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy17;
	default:	goto yy6;
	}
yy27:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy33;
	case 'b':	goto yy34;
	case 'c':	goto yy35;
	default:	goto yy12;
	}
yy28:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy27;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy31;
	case 'c':
		yyt4 = YYCURSOR;
		goto yy36;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy29:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy33;
	case 'b':	goto yy37;
	case 'c':	goto yy35;
	default:	goto yy12;
	}
yy30:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy27;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy31;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy29;
	case 'd':	goto yy23;
	default:
		yyt1 = yyt4;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy38;
	default:	goto yy6;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy23;
	default:	goto yy6;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy39;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy40;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy41;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy34:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy33;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy37;
	case 'c':
		yyt4 = YYCURSOR;
		goto yy42;
	case 'd':
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy35:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy39;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy43;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy41;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy36:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy33;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy37;
	case 'c':
		yyt3 = YYCURSOR;
		goto yy35;
	case 'd':	goto yy29;
	default:
		yyt1 = yyt4;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy44;
	default:	goto yy6;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy29;
	default:	goto yy6;
	}
yy39:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy45;
	case 'b':	goto yy46;
	case 'c':	goto yy47;
	default:	goto yy12;
	}
yy40:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy39;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy43;
	case 'c':
		yyt4 = YYCURSOR;
		goto yy48;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy41:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy45;
	case 'b':	goto yy49;
	case 'c':	goto yy47;
	default:	goto yy12;
	}
yy42:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy39;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy43;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy41;
	case 'd':	goto yy35;
	default:
		yyt1 = yyt4;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy50;
	default:	goto yy6;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy35;
	default:	goto yy6;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy51;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy52;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy53;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy46:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy45;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy49;
	case 'c':
		yyt4 = YYCURSOR;
		goto yy54;
	case 'd':
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy47:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy51;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy55;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy53;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy48:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy45;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy49;
	case 'c':
		yyt3 = YYCURSOR;
		goto yy47;
	case 'd':	goto yy41;
	default:
		yyt1 = yyt4;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy56;
	default:	goto yy6;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy41;
	default:	goto yy6;
	}
yy51:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy57;
	case 'b':	goto yy58;
	case 'c':	goto yy59;
	default:	goto yy12;
	}
yy52:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy51;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy55;
	case 'c':
		yyt4 = YYCURSOR;
		goto yy60;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy53:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt3 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy57;
	case 'b':	goto yy61;
	case 'c':	goto yy59;
	default:	goto yy12;
	}
yy54:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy51;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy55;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy53;
	case 'd':	goto yy47;
	default:
		yyt1 = yyt4;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy62;
	default:	goto yy6;
	}
yy56:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy47;
	default:	goto yy6;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy59;
	case 'd':
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt1 = yyt3;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy58:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy57;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy61;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy63;
	case 'd':
		yyt3 = YYCURSOR;
		goto yy11;
	default:
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy59:
	yych = *++YYCURSOR;
	yyt1 = yyt3;
	yyt3 = YYCURSOR;
	goto yy12;
yy60:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':
		yyt3 = YYCURSOR;
		goto yy57;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy61;
	case 'c':
		yyt3 = YYCURSOR;
		goto yy59;
	case 'd':	goto yy53;
	default:
		yyt1 = yyt4;
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy64;
	default:	goto yy6;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy53;
	default:	goto yy6;
	}
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy59;
	default:
		yyt3 = YYCURSOR;
		goto yy4;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy59;
	default:	goto yy6;
	}
}

re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
