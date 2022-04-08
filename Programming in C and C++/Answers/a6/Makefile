CC = gcc
CFLAGS = -Wall

SOURCES = $(wildcard *.c)
EXECS = $(SOURCES:%.c=%)

all: $(EXECS)

deleteofiles:
	find . -maxdepth 1 -name '*.o' -delete
	
deleteexec:
	find . -perm +100 -type f -delete

clean: deleteexec deleteofiles