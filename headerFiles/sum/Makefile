CC = gcc
CFLAGS = -Wall

main : main.o sum.o
	$(CC) $(CFLAGS) $^ -o $@

#compile each.c to .o
%.o : %.c sum.h
	$(CC) $(CFLAGs) -c $<

clean:
	rm *.o main

#comment created by #
#long lines can be wrapped with \
