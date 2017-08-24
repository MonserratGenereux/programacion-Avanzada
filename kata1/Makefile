all:
	 gcc -c kata1.c
	 gcc -c main.c
	 gcc -o main kata1.o main.o

test_kata1: clean
	 gcc -c kata1.c
	 gcc -c test_kata1.c
	 gcc -o test_kata1.exe kata1.o test_kata1.o
	 ./test_kata1.exe

test:	 test_kata1

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c kata1.c
	 gcc -c main.c
	 gcc -o main.exe kata1.o main.o
	 ./main
