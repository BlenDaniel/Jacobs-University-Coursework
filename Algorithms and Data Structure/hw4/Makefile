GCC = gcc
CFLAGS = -Wall

OBJ1 = Mergesort.o 

all: main1

main1: $(OBJ1) 
		$(GCC) $(CFLAGS) -o problem1 $(OBJ1) 


Mergesort.o : Mergesort.c
	$(GCC) $(CFLAGS) -c Mergesort.c
	
compileonly: $(OBJ1) 

deleteofiles:
	del -f *.o
	
deleteexec:
	del -f *.exe	

deleteall: deleteexec deleteofiles

