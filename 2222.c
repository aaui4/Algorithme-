#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int val;
    struct element *suivant;
} element;

// Fonction pour cr�er une liste vide
  element* creerListe()
  {
    return NULL; // Une liste vide est repr�sent�e par NULL
  }

// Fonction pour charger une liste � partir d'un tableau
 element* chargerListe(int Tab[], int K, element* liste)
 {
      int i;
    for (i = 0; i < K; i++)
        {
        element* nouveau = (element*)malloc(sizeof(element));
        nouveau->val = Tab[i];
        nouveau->suivant = liste;
        liste = nouveau;
        }
    return liste;
 }

// Proc�dure pour afficher les �l�ments d'une liste
void afficherListe(element* L) {
    element* temp = L;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->suivant;
    }
    printf("NULL\n");
}

// Fonction pour supprimer un �l�ment � la fin de la liste
element* supprimerEnFin(element* L) {
    if (L == NULL)
        return NULL; // Liste vide

    if (L->suivant == NULL)
        {
        free(L);
        return NULL;
        }

    element* temp = L;
    while (temp->suivant->suivant != NULL)
    {
        temp = temp->suivant;
    }

    free(temp->suivant); // Supprimer le dernier �l�ment
    temp->suivant = NULL; // Mettre le dernier �l�ment � NULL
    return L;
}

// Fonction pour ajouter un �l�ment au d�but de la liste
element* ajouterEnDebut(element* L1, int val) {
    element* nouveau = (element*)malloc(sizeof(element));
    nouveau->val = val;
    nouveau->suivant = L1;
    return nouveau;
}

// Proc�dure pour vider la liste
void viderListe(element* L) {
    element* temp ;
    while (L!= NULL) {
        temp = L;
        L=L->suivant;
        free(temp);
    }
    printf("La liste est vide\n");
}

int main() {
    int Tab[10] = {1, 3, 5, 7, 8, 10, 9, 11, 13, 20};
    element* liste = creerListe();
    element* L = chargerListe(Tab, 10, liste);
    afficherListe(L);

    element* L1 = supprimerEnFin(L);
    afficherListe(L1);

    element* L2 = ajouterEnDebut(L1, 40);
    afficherListe(L2);

    viderListe(L2);
    return 0;
}
