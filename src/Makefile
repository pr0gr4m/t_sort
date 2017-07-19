# Makefile - General Makefile for build
#

# include gerneral Makefile configuration file
include Makefile.inc

# object file list
OBJECTS = main.o merge_sort.o io.o

# execute file list
EXE = merge

all : ${EXE}

clean : 
	${RM} *.o ${EXE}

showall :
	@ echo ${EXE}

${EXE} : ${OBJECTS}
	${CC} ${CFLAGS} -o $@ $^
