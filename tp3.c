#include <stdio.h>
#include <stdlib.h>
typedef struct element{
  int val;
  struct element*suivant;
} element;

 element*creerListe()
 {
 return NULL;
 }
 element*chargerListe(int Tab [], int taille, element*liste)
  {
 int i;
   for (i=0; i< taille ;i++){
   element* nouveau= (element*)malloc(sizeof(element));
   nouveau-> val = Tab[i];
   nouveau-> suivant = liste;
   liste = nouveau;
 }
  return liste;
  }
 void afficherListe(element*L){
 element*temp=L;
  while(temp!= NULL){
  printf("%d",temp-> val);
  temp=temp->suivant;
  }
  printf("NULL\n");
 }
  element*supprimerEnFin(element*L){
      if(L==NULL){
        return NULL;
      }
  if(L->suivant==NULL)
    {
  free(L);
  return NULL ;
  }
  element*temp= L;
  while(temp->suivant->suivant!=NULL)
  temp= temp-> suivant;
  free(temp-> suivant);
  temp->suivant=NULL;
  return L;
  }
  element* ajoutEnDebut(element* L1, int val) {
    element* nouveau = (element*)malloc(sizeof(element));
    nouveau->val = val;
    nouveau->suivant = L1;
    return nouveau;
}
  void viderListe(element*L){
  element*courant = L;
  while(courant!=NULL){
  element*temp= courant;
  courant= courant->suivant;
  free(temp);
  }
  printf(" la liste est vide \n");
  }
  int main() {
   int Tab[10] = {1, 3, 5, 7, 8, 10, 11, 13, 20};
   element*liste = creerListe();
   element*L= chargerListe(Tab, 10, liste);
   afficherListe(L);
   element*L1=supprimerEnFin(L);
   afficherListe(L1);
   element*L2=ajouterEnDebut(L1, 40);
   afficherListe(L2);
   viderListe(L2);
   return 0;
  }
