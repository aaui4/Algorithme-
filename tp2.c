#include <stdio.h>
#include <stdlib.h>

char *ChargerChaine(int N) {
    char *chaine = (char *)malloc((N + 1) * sizeof(char));
    if (chaine == NULL) {
        printf("Erreur d'allocation de mÈmoire\n");
        return NULL;
    }
    printf("Veuillez saisir la chaine de caractËres :\n");
    scanf("%s", chaine);
    return chaine;
}

int Longueur(char *ch) {
    int l = 0;
    while (ch[l] != '\0') { // Õ”«» ÿÊ· «·”·”·… Õ Ï «·Ê’Ê· ≈·Ï ‰Â«Ì… «·”·”·…
        l++;
    }
    return l;
}

void ChargerTab(char *p, char Tab[]) {
    int i = 0;
    while (p[i] != '\0') {
        Tab[i] = p[i];
        i++;
    }
    Tab[i] = '\0'; // «÷«›… \0 ›Ì ‰Â«Ì…
}

void InverserTab(char Tab[], char T[], int m) {
    int i;
    for (i = 0; i < m; i++) {
        T[i] = Tab[m - 1 - i]; // ⁄ﬂ”  — Ì» «·⁄‰«’— ›Ì «·ÃœÊ·
    }
    T[m] = '\0';
}
void AfficherTab(char Tab[], int m) {
    printf("%s\n", Tab); // ⁄—÷ «·”·”·…
}

int main() {
    char *ch;
    int n;
    printf("Veuillez saisir la taille maximale de la chaine:\n"); // ÿ·» ≈œŒ«· ÕÃ„ «·”·”·…
    scanf("%d", &n);
    ch = ChargerChaine(n);
    if (ch == NULL) {
        return 1; // ≈‰Â«¡ «·»—‰«„Ã ›Ì Õ«·… ›‘· «· Œ’Ì’
    }
    int m = Longueur(ch); // Õ”«» ÿÊ· «·”·”·…
    char Tab[m + 1], T[m + 1];
    ChargerTab(ch, Tab);
    AfficherTab(Tab, m);
    InverserTab(Tab, T, m);
    AfficherTab(T, m);
    free(ch); //  Õ—Ì— «·–«ﬂ—… «·„Œ’’…
    return 0;
}
