#include<stdio.h>
main() {int i;
 char matrice[5][5]={
    {'1','2','3','4','5'},
    {'7','a','c','8','d'},
    {'c','9','4','z','8'},
    {'5','6','p','n','3'},
    {'2','9','t','m','k'},
};
//affichage la diagonale premierement de gauche a droite
printf("Diagonale premierement (de gauche a droite):\n");
for(i=0;i<5;i++){
    printf("%c",matrice[i][i]);
printf("\n");
}
//affichage la diagonale deuxiement de droite a gauche
printf("Diagonale deuxiement(de droite a gauche):\n");
for(i=0;i<5;i++){
    printf("%c",matrice[i][4-i]);
printf("\n");
}
}
