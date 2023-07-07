ass3_20CS10024_20CS30015_output.txt: analyzer ass3_20CS10024_20CS30015_test.c
	./analyzer < ass3_20CS10024_20CS30015_test.c > ass3_20CS10024_20CS30015_output.txt

analyzer: lex.yy.c
	gcc lex.yy.c -lfl -o analyzer

lex.yy.c: ass3_20CS10024_20CS30015.l
	flex ass3_20CS10024_20CS30015.l ass3_20CS10024_20CS30015.c

clean:
	rm analyzer lex.yy.c ass3_20CS10024_20CS30015_output.txt