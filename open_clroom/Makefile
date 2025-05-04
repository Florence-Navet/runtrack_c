# Définition des variables
CC = gcc

SRC = main.c
OBJ = main.o
EXE = main.exe

# Règle par défaut (make), qui compile le programme
all: $(EXE)

# Lien de l'exécutable à partir des objets
$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJ)

# Compilation du fichier source en fichier objet
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

# Règle pour nettoyer les fichiers intermédiaires (objets et exécutables)
clean:
	rm -f $(OBJ) $(EXE)

