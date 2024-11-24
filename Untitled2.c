#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ChargerChaine(int N) {
    char *chaine = (char *)malloc(N * sizeof(char));
    if (chaine == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        return(1);
    }
    printf("Veuillez saisir la chaine de caractères :\n");
    scanf("%s", chaine);
    return chaine;
}

int Longueur(char *ch) {
    return strlen(ch);
}

void ChargerTab(char *p, char Tab[]) {
    strcpy(Tab, p);
}

void InverserTab(char Tab[], char T[], int m) {
    int i;
    for ( i = 0; i < m; i++) {
        T[i] = Tab[m - 1 - i];
    }
    T[m] = '\0';
}

void AfficherTab(char Tab[], int m) {
    printf("%s\n", Tab);
}

int main() {
    char *ch;
    int n;
    printf("Veuillez saisir la taille maximale de la chaine:\n");
    scanf("%d", &n);
    ch = ChargerChaine(n);
    int m = Longueur(ch);
    char Tab[m + 1], T[m + 1];
    ChargerTab(ch, Tab);
    AfficherTab(Tab, m);
    InverserTab(Tab, T, m);
    AfficherTab(T, m);
    free(ch);
    return 0;
}
