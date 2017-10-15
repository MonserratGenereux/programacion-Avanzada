LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c romanToInteger.c
	 gcc -c main.c
	 gcc -o romanToInteger.exe romanToInteger.o main.o $(LIB)

test_romanToInteger: clean
	 gcc -c romanToInteger.c
	 gcc -c test_romanToInteger.c
	 gcc -o test_romanToInteger.exe romanToInteger.o test_romanToInteger.o
	 ./test_romanToInteger.exe

test:	 test_romanToInteger

clean:
	 rm *.out *.o *.exe || exit 0

romanToInteger: clean
	 gcc -c romanToInteger.c
	 gcc -c main.c
	 gcc -o romanToInteger.exe romanToInteger.o main.o $(LIB)

run: romanToInteger
	 ./romanToInteger.exe

runtest: romanToInteger
	 ./integrationtest.tcl ./romanToInteger.exe

