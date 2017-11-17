LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c char-server.c
	 gcc -c main.c
	 gcc -o char-server.exe char-server.o main.o $(LIB)

test_char-server: clean
	 gcc -c char-server.c
	 gcc -c test_char-server.c
	 gcc -o test_char-server.exe char-server.o test_char-server.o
	 ./test_char-server.exe

test:	 test_char-server

clean:
	 rm *.out *.o *.exe || exit 0

char-server: clean
	 gcc -c char-server.c
	 gcc -c main.c
	 gcc -o char-server.exe char-server.o main.o $(LIB)

run: char-server
	 ./char-server.exe

runtest: char-server
	 ./integrationtest.tcl ./char-server.exe

