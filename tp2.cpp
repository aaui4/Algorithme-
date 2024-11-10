#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char*ChargerChaine(int N);
int Longueur(char*ch);
void InverserTab(char Tab[],char T[], int m);
void ChargerTab(char*p, char Tab[]);
void AfficherTab(char Tab[], int m);
int main()
{
    char*ch;
    int n;
   printf("Veuillez saisir la taille maximal de la  chaine:\n");
   scanf("%d",&n);
   getchar();
   ch=ChargerChaine(n);
 if(ch==NULL)
    {
    printf("Erreur d'allocation de memoire \n");
    return 1 ;
    }
 free(ch);
 return 0;
}
  char *ChargerChaine(int N)
  {
    char *chaine = ( char*)malloc((N+1) * sizeof(char));
    if(chaine == NULL)
    {
    return NULL;
    }
     printf("Veuillez saisir la chaine de caracteres :\n");
     fgets(chaine , N +1, stdin);
     size_t len = strlen(chaine);
    if(len>0 && chaine[len- 1] == '\n')
    {
    chaine[len - 1]='\0';
    }
    return chaine;
  }
 int Longueur(char*ch)
 {
  return strlen(ch);
 }
 void ChargerTab(char *p, char Tab[])
 {
    strcpy(Tab,p);
 }
 void InverserTab(char Tab[], char T[], int m)
 {
  int i;
  for(i=0; i < m; i++)
 {
    T[i]=Tab[m-i-1];
 }
  T[m]='\0';
 }
  void AfficherTab(char Tab[],int m)
  {
  printf("%s\n",Tab);
  }
