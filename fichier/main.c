#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#ifndef WIN32
#endif // WIN32#include <sys/types.h> #endif

void viderBuffer()
{
       int c = 0;
          while (c != '\n' && c != EOF)
            {
                c = getchar();
            }
}

int lire(char *chaine, int longueur)
 {
     char *positionEntree = NULL;
     if (fgets(chaine, longueur, stdin) != NULL)
        {
            positionEntree = strchr(chaine, '\n');
            if (positionEntree != NULL) *positionEntree = '\0';
                 return 1;
        }
        else
        {
            viderBuffer();
            return 0;
        }
 }

typedef struct LIVRES LIVRES;
struct LIVRES
{
    char code[100];
    char nom[100];
    char editeur[100];
    char anneeEdit[50];
    char auteur[100];
    int prixAchat;
    int prixVente;
};

int compterFichier(DIR* dir)
 {
      int nbr = 0;
       struct dirent* ent = NULL;
        while ((ent = readdir(dir)) != NULL)
            {
                 if (strcmp(ent->d_name, ".") != 0 && strcmp(ent->d_name, "..") != 0)
                    nbr++;
            }
    return nbr;
}

int main()
{
 /*   char un[100];char trois[100];char deux[100];
    char UN1[100];char DEUX[100];char TROIS[100];



    FILE *fichier;
    while (!feof(fichier))
    {
    fichier=fopen("yo.txt","r");
    fscanf(fichier,"\n%s",&UN1);
    printf("\nvos mots sont: un=%s",UN1);
    }
     fclose(fichier);*/


        DIR* rep = NULL;
        rep = opendir("BD/livre"); /* Ouverture d'un dossier */

         if (rep == NULL) /* Si le dossier n'a pas pu être ouvert */
            exit(1); /* (mauvais chemin par exemple) */
         puts("Le dossier a ete ouvert avec succes");
         printf("Nombre de fichier est:%d ",compterFichier(rep)-1) ;

        if (closedir(rep) == -1) /* S'il y a eu un souci avec la fermeture */
            exit(-1);
        puts("Le dossier a ete ferme avec succes");


    return 0;
}
