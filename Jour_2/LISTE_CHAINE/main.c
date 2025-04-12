Liste *initialisation()
{
	Liste *liste = malloc(sizeof(*liste));
	Element *element = malloc(sizeof(*element));
	
	if(liste == NULL || element ==  NULL)
	{
		exit(EXIT_FAILURE);
	}
	element->nombre=0;
	element->suivant=NULL;
	liste->premier=element; // explique-moi cette ligne
	
	return liste;
}

1. Liste avec majuscule
Donc ici, Liste est le type représentant 
une liste chaînée, c’est comme
 dire "je crée une voiture".
 
typedef struct Liste {
    Element *premier;
} Liste;

2.liste(avec minuscule)
C’est le nom de la variable, un pointeur
 vers une structure de type Liste.
 
 Liste *liste = malloc(sizeof(*liste));
 
 Tu crées une nouvelle "voiture" (structure Liste) 
 et tu la stockes dans la variable liste.
 
3. element(pointeur vers un Elementà
C'est le premier noeud(élément) de ta liste :
Element *element = malloc(sizeof(*element));
element->nombre = 0;
element->suivant = NULL;

DONC que fait liste -> premier = element;
Tu dis:
"Dans la structure Liste pointée par Liste, je veux le champ
premier (le tout premier élément de la liste) pointeur
vers élément."

liste (Liste*) ─────┐
                    ▼
            ┌─────────────────┐
            │ premier         │───► [nombre = 0 | suivant = NULL]
            └─────────────────┘

Liste = le type de la liste

liste = la variable qui pointe vers une structure Liste

element = un élément que tu veux mettre au début de la liste

liste->premier = element = tu dis que l’élément est le début de la liste

=========================================
ajouter nouvel element
void insertion(Liste *liste, int nvNombre)
{
	/*creation nouvel élément*/
	Element *nouveau = malloc(sizeof(*nouveau));
	if(liste == NULL || nouveau == NULL)
	{
		exit(EXIT_FAILURE);
	}
	nouveau->nombre=nvNombre;
	
	/*insertion element debut liste*/
	nouveau->suivant = liste->premier;
	liste->premier = nouveau;
}
 
============================================
AFFICHER UN LISTE CHAINE
 int main()
{
    Liste *maListe = initialisation();

    insertion(maListe, 4);
    insertion(maListe, 8);
    insertion(maListe, 15);
    suppression(maListe);

    afficherListe(maListe);

    return 0;
}
