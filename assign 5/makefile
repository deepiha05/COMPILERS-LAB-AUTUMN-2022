parser.out: lex.yy.o ass5_20CS10024_20CS30015.tab.o ass5_20CS10024_20CS30015_translator.o
	g++ lex.yy.o ass5_20CS10024_20CS30015.tab.o ass5_20CS10024_20CS30015_translator.o -lfl -o parser.out

ass5_20CS10024_20CS30015_translator.o: ass5_20CS10024_20CS30015_translator.cxx ass5_20CS10024_20CS30015_translator.h
	g++ -c ass5_20CS10024_20CS30015_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

ass5_20CS10024_20CS30015.tab.o: ass5_20CS10024_20CS30015.tab.c
	g++ -c ass5_20CS10024_20CS30015.tab.c

lex.yy.c: ass5_20CS10024_20CS30015.l ass5_20CS10024_20CS30015.tab.h ass5_20CS10024_20CS30015_translator.h
	flex ass5_20CS10024_20CS30015.l

ass5_20CS10024_20CS30015.tab.c : ass5_20CS10024_20CS30015.y
	bison -dtv ass5_20CS10024_20CS30015.y

ass5_20CS10024_20CS30015.tab.h : ass5_20CS10024_20CS30015.y
	bison -dtv ass5_20CS10024_20CS30015.y

clean:
	rm parser.out ass5_20CS10024_20CS30015_translator.o lex.yy.* ass5_20CS10024_20CS30015.tab.* ass5_20CS10024_20CS30015.output

test: parser.out
	@echo "Running test 1 (Arithmetic, shift, and bit expressions)"
	./parser.out < ass5_20CS10024_20CS30015_test1.c > ass5_20CS10024_20CS30015_quads1.out
	@echo "Test 1 complete\n"

	@echo "Running test 2 (Unary expressions and operators)"
	./parser.out < ass5_20CS10024_20CS30015_test2.c > ass5_20CS10024_20CS30015_quads2.out
	@echo "Test 2 complete\n"

	@echo "Running test 3 (Relational and boolean operators with if-else blocks)"
	./parser.out < ass5_20CS10024_20CS30015_test3.c > ass5_20CS10024_20CS30015_quads3.out
	@echo "Test 3 complete\n"

	@echo "Running test 4 (Arrays and pointers)"
	./parser.out < ass5_20CS10024_20CS30015_test4.c > ass5_20CS10024_20CS30015_quads4.out
	@echo "Test 4 complete\n"

	@echo "Running test 5 (Declarations and assignments)"
	./parser.out < ass5_20CS10024_20CS30015_test5.c > ass5_20CS10024_20CS30015_quads5.out
	@echo "Test 5 complete\n"

	@echo "Running test 6 (Loops)"
	./parser.out < ass5_20CS10024_20CS30015_test6.c > ass5_20CS10024_20CS30015_quads6.out
	@echo "Test 6 complete\n"