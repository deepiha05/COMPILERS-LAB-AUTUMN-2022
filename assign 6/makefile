# gcc ass6_20CS10024_20CS30015_test1.c -S
# gcc ass6_20CS10024_20CS30015_test2.c -S
# gcc ass6_20CS10024_20CS30015_test3.c -S
# gcc ass6_20CS10024_20CS30015_test4.c -S
# gcc ass6_20CS10024_20CS30015_test5.c -S
# gcc ass6_20CS10024_20CS30015_test6.c -S

ass6_20CS10024_20CS30015_test1.s: ass6_20CS10024_20CS30015_test1.c
	gcc -S ass6_20CS10024_20CS30015_test1.c 

ass6_20CS10024_20CS30015_test1.s: ass6_20CS10024_20CS30015_test1.c
	gcc -S ass6_20CS10024_20CS30015_test2.c 

ass6_20CS10024_20CS30015_test1.s: ass6_20CS10024_20CS30015_test1.c
	gcc -S ass6_20CS10024_20CS30015_test3.c 
ass6_20CS10024_20CS30015_test1.s: ass6_20CS10024_20CS30015_test1.c
	gcc -S ass6_20CS10024_20CS30015_test4.c 
ass6_20CS10024_20CS30015_test1.s: ass6_20CS10024_20CS30015_test1.c
	gcc -S ass6_20CS10024_20CS30015_test5.c 
ass6_20CS10024_20CS30015_test1.s: ass6_20CS10024_20CS30015_test1.c
	gcc -S ass6_20CS10024_20CS30015_test6.c 



parser.out: lex.yy.o ass6_20CS10024_20CS30015.tab.o ass6_20CS10024_20CS30015_translator.o ass6_20CS10024_20CS30015_target_translator.o
	g++ lex.yy.o ass6_20CS10024_20CS30015.tab.o ass6_20CS10024_20CS30015_translator.o ass6_20CS10024_20CS30015_target_translator.o -lfl -o parser.out

ass6_20CS10024_20CS30015_target_translator.o: ass6_20CS10024_20CS30015_target_translator.cxx ass6_20CS10024_20CS30015_translator.h
	g++ -c ass6_20CS10024_20CS30015_target_translator.cxx

ass6_20CS10024_20CS30015_translator.o: ass6_20CS10024_20CS30015_translator.cxx ass6_20CS10024_20CS30015_translator.h
	g++ -c ass6_20CS10024_20CS30015_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

ass6_20CS10024_20CS30015.tab.o: ass6_20CS10024_20CS30015.tab.c
	g++ -c ass6_20CS10024_20CS30015.tab.c

lex.yy.c: ass6_20CS10024_20CS30015.l ass6_20CS10024_20CS30015.tab.h ass6_20CS10024_20CS30015_translator.h
	flex ass6_20CS10024_20CS30015.l

ass6_20CS10024_20CS30015.tab.c : ass6_20CS10024_20CS30015.y
	bison -dtv ass6_20CS10024_20CS30015.y

ass6_20CS10024_20CS30015.tab.h : ass6_20CS10024_20CS30015.y
	bison -dtv ass6_20CS10024_20CS30015.y

libass2_20CS30015.a: ass2_20CS30015.o
	ar -rcs libass2_20CS30015.a ass2_20CS30015.o

ass2_20CS30015.o: ass2_20CS30015.c myl.h
	gcc -c ass2_20CS30015.c

ass6_20CS10024_20CS30015_test1.s: ass6_20CS10024_20CS30015_test1.c
	gcc ass6_20CS10024_20CS30015_test1.c -S

clean:
	rm libass2_20CS30015.a ass2_20CS30015.o parser.out ass6_20CS10024_20CS30015_translator.o ass6_20CS10024_20CS30015_target_translator.o lex.yy.* ass6_20CS10024_20CS30015.tab.* y.output test*

test: parser.out libass2_20CS30015.a
	@echo "Generating assembly files\n"
	./parser.out < ass6_20CS10024_20CS30015_test1.c > ass6_20CS10024_20CS30015_quads1.out
	./parser.out < ass6_20CS10024_20CS30015_test2.c > ass6_20CS10024_20CS30015_quads2.out
	./parser.out < ass6_20CS10024_20CS30015_test3.c > ass6_20CS10024_20CS30015_quads3.out
	./parser.out < ass6_20CS10024_20CS30015_test4.c > ass6_20CS10024_20CS30015_quads4.out
	./parser.out < ass6_20CS10024_20CS30015_test5.c > ass6_20CS10024_20CS30015_quads5.out
	./parser.out < ass6_20CS10024_20CS30015_test6.c > ass6_20CS10024_20CS30015_quads6.out
	
	@echo "Compiling assembly files\n"
	gcc ass6_20CS10024_20CS30015_test1.s -L. -lass2_20CS30015 -no-pie -o test1
	gcc ass6_20CS10024_20CS30015_test2.s -L. -lass2_20CS30015 -no-pie -o test2
	gcc ass6_20CS10024_20CS30015_test3.s -L. -lass2_20CS30015 -no-pie -o test3
	gcc ass6_20CS10024_20CS30015_test4.s -L. -lass2_20CS30015 -no-pie -o test4
	gcc ass6_20CS10024_20CS30015_test5.s -L. -lass2_20CS30015 -no-pie -o test5
	gcc ass6_20CS10024_20CS30015_test6.s -L. -lass2_20CS30015 -no-pie -o test6

	@echo "Binaries generated. Run using ./test<num>\n\n"
	@echo "Running test1:\n"
	@./test1
	@echo "Running test2:\n"
	@./test2
	@echo "Running test3:\n"
	@./test3
	@echo "Running test4:\n"
	@./test4
	@echo "Running test5:\n"
	@./test5
	@echo "Running test6:\n"
	@./test6
	