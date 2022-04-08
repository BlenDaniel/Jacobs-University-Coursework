CC = gcc
CFLAGS = -Wall

OBJ = use_linked_list.o linked_list.o

all: main

main: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)
	
use_linked_list.o : use_linked_list.c linked_list.h
					$(CC) $(CFLAGS) -c use_linked_list.c

linked_list.o : linked_list.c linked_list.h
				$(CC) $(CFLAGS) -c linked_list.c
	
compileonly: $(OBJ)

deleteofiles:
	del -f *.o
	
deleteexec:
	del -f main.exe	

deleteall: deleteexec deleteofiles

