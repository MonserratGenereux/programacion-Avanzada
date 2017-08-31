all:
	 gcc -c kata-2.c
	 gcc -c main.c
	 gcc -o main kata-2.o main.o

test_kata-2: clean
	 gcc -c kata-2.c
	 gcc -c test_kata-2.c
	 gcc -o test_kata-2.exe kata-2.o test_kata-2.o
	 ./test_kata-2.exe

test:	 test_kata-2

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c kata-2.c
	 gcc -c main.c
	 gcc -o main.exe kata-2.o main.o
	 ./main
