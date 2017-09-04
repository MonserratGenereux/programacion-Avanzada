all:
	 gcc -c proyecto.c
	 gcc -c main.c
	 gcc -o main proyecto.o main.o

test_proyecto: clean
	 gcc -c proyecto.c
	 gcc -c test_proyecto.c
	 gcc -o test_proyecto.exe proyecto.o test_proyecto.o
	 ./test_proyecto.exe

test:	 test_proyecto

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c proyecto.c
	 gcc -c main.c
	 gcc -o main.exe proyecto.o main.o
	 ./main
