all:
	 gcc -c calculateDays.c
	 gcc -c main.c
	 gcc -o main calculateDays.o main.o

test_calculateDays: clean
	 gcc -c calculateDays.c
	 gcc -c test_calculateDays.c
	 gcc -o test_calculateDays.exe calculateDays.o test_calculateDays.o
	 ./test_calculateDays.exe

test:	 test_calculateDays

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c calculateDays.c
	 gcc -c main.c
	 gcc -o main.exe calculateDays.o main.o
	 ./main
