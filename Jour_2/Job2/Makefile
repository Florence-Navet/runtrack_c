##definition du compilateur
cc = gcc

# ======================
# Options du compilateur
# -Wall : active tous les avertissements
#-Wextra : affiche des avertissements supplémentaires.
#-std=c99 : spécifie que le code source doit être compilé selon la norme C99.
#========================
CFLAGS = -Wall -Wextra -std=c99

#Nom de l'éxécutation
TARGET = demarre

#Fichiers source
SRC = array_clone.c swap.c main.c99

#Fichiers objets (Fichiers .o générés à partirs des .c)
OBJ = $(SRC:.c =.o)

#Règle par défaut(qd on éxécute `make` ss arguments)
all: $(TARGET)

#Règle pour créer son éxécutable avec ses fichiers objets
$(TARGET):$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

#========================
#règle pour compiler fichier source .c en .o
#-c : "compiler sans lier"
# $< : fichier source (ex : main.c)
# $@ : cible cad fichier obj (ex: main.o)
#=========================
%.o %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Règle pour nettoyer les fichiers objets et executable
clean :
	rm -f $(OBJ) $(TARGET)

#Spécifie que `clean` et `all` ne sont pas des fichiers
.PHONY: all clean