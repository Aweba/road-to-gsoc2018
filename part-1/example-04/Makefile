# -*- Declaraciones para el make -*-
# Compilacion
.SILENT: # Para que no bote los archivos
CC    = gcc
SRCCC = hello_structs_1.c
OBJCC = hello_structs_1.o

# Enlazado
LINKER = gcc
SRCL   = hello_structs_1.o
BINL   = hello_structs_1.exe

# Utilidades
ifeq ($(OS),Windows_NT)
	RM = rm -rf
else
	RM = rm -rf
endif
# -*- Ejecucion -*-
.PHONY: all all-before all-after clean run
all: all-before $(OBJCC) $(BINL) all-after

clean:
	$(RM) $(OBJCC) $(BINL)

$(OBJCC): $(GLOBALDEPS)
	$(CC) -c $(SRCCC) -o $(OBJCC)

$(BINL): $(OBJCC)
	$(LINKER) $(SRCL) -o $(BINL)

run:
	./$(BINL)
