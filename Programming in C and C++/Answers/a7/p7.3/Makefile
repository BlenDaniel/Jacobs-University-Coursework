all: linked_list_main

#compiling and getting an executable named linked_list_main
linked_list_main: linked_list.o use_linked_list.o
	gcc -Wall -o linked_list_main linked_list.o use_linked_list.o

#getting the o file named linked_list.o from linked_list.c by using linked_list.h	
linked_list.o: linked_list.h linked_list.c
	gcc -Wall -c linked_list.c

#getting the o file named use_linked_list.o from use_linked_list.c by using linked_list.h
use_linked_list.o: linked_list.h use_linked_list.c
	gcc -Wall -c use_linked_list.c
	
#compile only calling the methods		
compileonly: use_linked_list.o linked_list.o

# I used del because I am on windows and rm was not working
deleteofiles:
	del -f *.o

#deleting the executables		
deleteexec:
	del -f linked_list_main.exe	

#deleting both the executable and the o file
deleteall: deleteexec deleteofiles