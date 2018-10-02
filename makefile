all : struct.c
	gcc struct.c

run:
	./a.out

f:
	emacs struct.c &
