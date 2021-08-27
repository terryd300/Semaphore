a.out:		HW8.o
		gcc -o a.out HW8.o -pthread

HW5.o:		HW8.c
		gcc -c HW8.c

clean:
		rm *.o
		rm a.out
