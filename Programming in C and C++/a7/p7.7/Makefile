all: teststack

#compiling and getting an executable named teststack
teststack: stack.o teststack.o
	gcc -Wall -o teststack stack.o teststack.o

#getting the o file named teststack.o from teststack.c by using stack.h	
teststack.o: stack.h teststack.c
	gcc -Wall -c teststack.c

#getting the o file named stack.o from stack.c by using stack.h
stack.o: stack.h stack.c
	gcc -Wall -c stack.c
	
#compile only calling the methods	
compileonly: stack.o teststack.o

# I used del because I am on windows and rm was not working
deleteofiles:
	del -f *.o

#deleting the executables	
deleteexec:
	del -f teststack.exe	

#deleting both the executable and the o file
deleteall: deleteexec deleteofiles