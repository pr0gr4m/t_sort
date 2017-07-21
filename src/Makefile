# Makefile - General Makefile for build
#

# include gerneral Makefile configuration file
include Makefile.inc

# source file list
SOURCES = main.c comp.c io.c \
		  insert_sort.c shell_sort.c \
		  merge_sort.c no_sort.c

# execute file

EXE = insert shell merge nos

all : ${EXE}

insert : ${SOURCES}
	${CC} ${CFLAGS} -DINSERT -o $@ $^

shell : ${SOURCES}
	${CC} ${CFLAGS} -DSHELL -o $@ $^

merge : ${SOURCES}
	${CC} ${CFLAGS} -DMERGE -o $@ $^

nos : ${SOURCES}
	${CC} ${CFLAGS} -DNOSORT -o $@ $^

clean : 
	${RM} *.o ${EXE}

showall :
	@ echo ${EXE}

