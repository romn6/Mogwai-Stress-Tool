all:	stress

stress: stress.c killcpu.c stress.h
	gcc -o stress

cleam:
	rm -f stress