# ===========================
# Définition du compilateur
# ===========================
CC = gcc

# ===========================
# Options du compilateur
# -Wall : active tous les avertissements
# -Wextra : affiche des avertissements supplémentaires.
# -std=c99 : spécifie que le code source doit être compilé selon la norme C99.
# ===========================
CFLAGS = -Wall -Wextra -std=c99

# ===========================
# Nom de l'exécutable
# ===========================
TARGET = demarre

# ===========================
# Fichiers source
# ===========================
SRC = array_clone.c main.c

# ===========================
# Fichiers objets (Fichiers .o générés à partir des .c)
# ===========================
OBJ = $(SRC:.c=.o)

# ===========================
# Règle par défaut (quand on exécute `make` sans arguments)
# ===========================
all: $(TARGET)

# ===========================
# Règle pour créer l'exécutable avec ses fichiers objets
# ===========================
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# ===========================
# Règle pour compiler un fichier source .c en fichier objet .o
# -c : "compiler sans lier"
# $< : fichier source (par exemple : main.c)
# $@ : fichier cible (par exemple : main.o)
# ===========================
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# ===========================
# Règle pour nettoyer les fichiers objets et l'exécutable
# ===========================
clean:
	rm -f $(OBJ) $(TARGET)

# ===========================
# Spécifie que `clean` et `all` ne sont pas des fichiers
# ===========================
.PHONY: all clean
