#include <stdio.h>
#include <stdlib.h>

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


void supprimer()
{
     FILE *fichier;LIVRES liv;
    char nbr; char tir[3]="--";
    int trouver;char code[100];char nom[100];char editeur[100];char anneeEdit[100];char auteur[100];int prixAchat;char name[100];
    printf("\nEntrer le code de la matiere que vous vouler supprimer:");
    scanf("%s",&name);
    fflush(stdin);
    trouver=0;
    fichier=fopen("BD/livre/livres.txt","r");
    do
    {
        fscanf(fichier,"%s %s %s %s %s %d",&liv.code,&liv.nom,&liv.editeur,&liv.anneeEdit,&liv.auteur,&liv.prixAchat);
        if(strcmp(liv.code,name)==0)
         {
            trouver=1;
            break;
         }
    }while(!trouver && !feof(fichier));
    if (trouver==0){printf("\nNon enregistrer ou deja vendu!!");}
    fclose(fichier);
    printf("\nCe livre est surement celui-ci:\n%s\t|\t%s\t|\t%s\t|\t%s\t|\t%s\t|\t%d",liv.code,liv.nom,liv.editeur,liv.anneeEdit,liv.auteur,liv.prixAchat);
    if (trouver==1)
        {
    printf("\nVoulez vous vraimment supprimer <o/n>: ");
            scanf("%c",&nbr);
             if(nbr=='o' || nbr=='O')
             {
                 fichier = fopen("BD/livre/livres.txt","a");
                fseek(fichier,0,SEEK_END);
                fprintf(fichier,"%s",tir);
                fclose(fichier);
                 //--------------------------------------------------------------
                 FILE *k;
                 fichier=fopen("BD/livre/livres.txt","r");
                 k=fopen("BD/livre/c.txt","a+");
                 do
                 {
                 fscanf(fichier,"%s %s %s %s %s %d",&code,&nom,&editeur,&anneeEdit,&auteur,&prixAchat );
                 if(strcmp(liv.code,code)!=0 && strcmp(code,tir)!=0)
                   {
                       trouver=0;
                       fseek(k,0,SEEK_END);
                 fprintf(k,"\n%s\t%s\t%s\t%s\t%s\t%d",code,nom,editeur,anneeEdit,auteur,prixAchat);
                   }
                 }while(!feof(fichier));
                 fclose(k);
                 fclose(fichier);
                 remove("BD/livre/livres.txt");
                 rename("BD/livre/c.txt","BD/livre/livres.txt");
                 printf("\nSuppression effectuee avec succes..");
            }
            else if (nbr=='n' || nbr=='N')  printf("\nSuppression annule avec success..");
            else printf("\nChoix invalide !!");
        }
}


int main()
{
supprimer();
    return 0;
}
