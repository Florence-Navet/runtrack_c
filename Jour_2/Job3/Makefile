# Makefile pour compiler un projet C avec plusieurs fichiers sources

# Le compilateur à utiliser
CC = gcc

# Les options de compilation
CFLAGS = -Wall -Wextra -std=c11

# Les fichiers sources
SRC = main.c swap.c array_clone.c

# Les fichiers objets générés à partir des sources
OBJ = $(SRC:.c=.o)

# Le nom de l'exécutable
EXEC = demarre

# Cible par défaut appelée avec juste "make"
all: $(EXEC)

# Règle pour créer l'exécutable
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Règle générique pour compiler les .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Cible pour nettoyer les fichiers temporaires
clean:
	del /Q *.o *.exe 2>nul || rm -f *.o $(EXEC)

# Pour forcer recompilation de tout
rebuild: clean all
