LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c char-client.c
	 gcc -c main.c
	 gcc -o char-client.exe char-client.o main.o $(LIB)

test_char-client: clean
	 gcc -c char-client.c
	 gcc -c test_char-client.c
	 gcc -o test_char-client.exe char-client.o test_char-client.o
	 ./test_char-client.exe

test:	 test_char-client

clean:
	 rm *.out *.o *.exe || exit 0

char-client: clean
	 gcc -c char-client.c
	 gcc -c main.c
	 gcc -o char-client.exe char-client.o main.o $(LIB)

run: char-client
	 ./char-client.exe

runtest: char-client
	 ./integrationtest.tcl ./char-client.exe

