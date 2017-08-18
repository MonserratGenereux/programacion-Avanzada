CC=gcc
CFLAGS=-I.
DEPS = hellomake.h
OBJ = hellomake.o hellofunc.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

twoSum.exe: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean
	rm *.o *.exe