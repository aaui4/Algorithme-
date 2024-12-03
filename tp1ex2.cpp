#include<stdio.h>
int main() 
{int i,j,k;
int matrice[4][4]={
{1, 2, 3, 4},
{5, 6, 7, 8},
{9, 10, 11, 12},
{13, 14, 15, 16},
};
//affichage matrice
 printf("matrice original:\n");
for(i=0;i<4;i++)
   {
     for(j=0;j<4;j++)
     {
    printf("%d",matrice[i][j]);
     }
printf("\n");
   }
for(i=0;i<4;i++)
   {
    for(j=i+1;j<4;j++)
    {
      k = matrice[i][j];
      matrice[i][j]= matrice[j][i];
      matrice[j][i]=k;
    }
   }
 printf("matrice apres symetrie:\n");
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {
        printf("%d",matrice[i][j]);
    }
printf("\n");
}
}
