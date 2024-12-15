#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int val;
    struct element *suivant;
} element;

element* creerListe()
 {
    return NULL ;

 }

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

void afficherListe(element* L) {
    element* temp = L;
    while (temp != NULL) {
        printf("%d -> ", temp->val); // عرض قيمة العنصر
        temp = temp->suivant; 
    }
    printf("NULL\n"); 
}

element* supprimerEnFin(element* L)
 {
    if (L == NULL)
        return NULL; 

    if (L->suivant == NULL)
    {
        free(L); // حذف العنصر
        return NULL;
    }

    element* temp = L;// استخدمنا temp للتنقل
    while (temp->suivant->suivant != NULL)
    {
    temp = temp->suivant; // الانتقال إلى العنصر قبل الأخير
    }
     free(temp->suivant); 
     temp->suivant = NULL; // تعيين المؤشر إلى NULL
     return L;
 }

element* ajouterEnDebut(element* L1, int val) {
    element* nouveau = (element*)malloc(sizeof(element));
    nouveau->val = val;
    nouveau->suivant = L1;
    return nouveau;
}

void viderListe(element* L) {
    element* temp;
    while (L != NULL) {
        temp = L; // حفظ المؤشر الحالي
        L = L->suivant; 
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
