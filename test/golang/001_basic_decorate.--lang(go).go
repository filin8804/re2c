// Code generated by re2c, DO NOT EDIT.
//line "golang/001_basic_decorate.--lang(go).re":1
package main

type YYCTYPE byte
type Input struct {
	data   []YYCTYPE
	cursor int
	marker int
}

func peek(in *Input) func() YYCTYPE {
	return func() YYCTYPE {
		return in.data[in.cursor]
	}
}

func skip(in *Input) func() {
	return func() {
		in.cursor++
	}
}

func backup(in *Input) func() {
	return func() {
		in.marker = in.cursor
	}
}

func restore(in *Input) func() {
	return func() {
		in.cursor = in.marker
	}
}

func Lex(str string) int {
	in := &Input{
		data:   []YYCTYPE(str),
		cursor: 0,
	}
	YYPEEK := peek(in)
	YYSKIP := skip(in)
	YYBACKUP := backup(in)
	YYRESTORE := restore(in)

	
//line "golang/001_basic_decorate.--lang(go).go":48
{
	var yych YYCTYPE
	yych = YYPEEK ()
	switch (yych) {
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy4
	default:
		goto yy2
	}
yy2:
	YYSKIP ()
yy3:
//line "golang/001_basic_decorate.--lang(go).re":50
	{
		return -1
	}
//line "golang/001_basic_decorate.--lang(go).go":83
yy4:
	YYSKIP ()
	YYBACKUP ()
	yych = YYPEEK ()
	switch (yych) {
	case 0x00:
		goto yy5
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy7
	default:
		goto yy3
	}
yy5:
	YYSKIP ()
//line "golang/001_basic_decorate.--lang(go).re":54
	{
		return 1
	}
//line "golang/001_basic_decorate.--lang(go).go":120
yy7:
	YYSKIP ()
	yych = YYPEEK ()
	switch (yych) {
	case 0x00:
		goto yy5
	case '0':
		fallthrough
	case '1':
		fallthrough
	case '2':
		fallthrough
	case '3':
		fallthrough
	case '4':
		fallthrough
	case '5':
		fallthrough
	case '6':
		fallthrough
	case '7':
		fallthrough
	case '8':
		fallthrough
	case '9':
		goto yy7
	default:
		goto yy9
	}
yy9:
	YYRESTORE ()
	goto yy3
}
//line "golang/001_basic_decorate.--lang(go).re":57

}

func main() {
	if Lex("123\000") != 1 {
		panic("expected 123")
	}
}
