#include<stdio.h>
int main() 
{int i,j;
 char matrice[5][5]={
    {'1','2','3','4','5'},
    {'7','a','c','8','d'},
    {'c','9','4','z','8'},
    {'5','6','p','n','3'},
    {'2','9','t','m','k'},
};
//Affichage la matrice
 printf("La matrice original:\n");
   for(i=0;i<5;i++)
   {
     for(j=0;j<5;j++)
     {
     printf("%c  ",matrice[i][j]);
     }
  printf("\n");
  }
//Affichage des linges d'indice pair(0,2,4)
 printf("Matrice avec les ligens d'indice pair:\n");
   for(i=0;i<5;i+=2)
   {
      for(j=0;j<5;j++)
      {
      printf("%c  ",matrice[i][j]);
      }
   printf("\n");
  }
//Afichage la matrice des element d'indice impair de chaque linge
 printf("Matrice avec les ligens d'indice impair de chaque linge:\n");
    for(i=0;i<5;i++)
    {
      for(j=1;j<5;j+=2)
      {
       printf("%c  ",matrice[i][j]);
      }
    printf("\n");
    }
return 0;
}
