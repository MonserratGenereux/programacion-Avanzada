LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c 4.c
	 gcc -c main.c
	 gcc -o 4.exe 4.o main.o $(LIB)

test_4: clean
	 gcc -c 4.c
	 gcc -c test_4.c
	 gcc -o test_4.exe 4.o test_4.o
	 ./test_4.exe

test:	 test_4

clean:
	 rm *.out *.o *.exe || exit 0

4: clean
	 gcc -c 4.c
	 gcc -c main.c
	 gcc -o 4.exe 4.o main.o $(LIB)

run: 4
	 ./4.exe

runtest: 4
	 ./integrationtest.tcl ./4.exe

