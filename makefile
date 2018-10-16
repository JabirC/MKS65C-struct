compile : struct.c struct.h
	gcc struct.c

run:
	./a.out

f:
	emacs struct.c &
