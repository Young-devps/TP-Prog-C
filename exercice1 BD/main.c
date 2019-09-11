#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structure.h"
#include "fonction.h"
#include "fonction1.h"
int main()
{
#define n 20
    matiere bandjoun[n];
    matiere douala[n];
    matiere cameroun[n];
    matiere tableau;
    int nb,dou,cam,ban;
    int menu,rep=1;
    do{
            system("cls");
    printf("\t\t**************************          VARUS PRO          *******************************\n");
    printf("\t\t*************   faite un choix pour voir les matieres proposees pas   ****************\n");
    printf("\t\t************************   chaque institut     ***************************************\n");
    printf("\t\t**************************************************************************************\n");
    printf("\t\t** entrez 1:            pour selectionner IUT DE DOUALA     **************************\n");
    printf("\t\t** entrez 2:            pour selectionner IAI DU CAMEROUN   **************************\n");
    printf("\t\t** entrez 3:            pour selectionner IUT DE BANDJOUN   **************************\n");
    printf("\t\t** entrez 4:                    pour FERMER                 **************************\n");
    printf("\t\t*************************      EMEGNI LIMOGNE VARUS         **************************\n");
    printf("\t\t**************************************************************************************\n");
    printf("\t\t\t\t\t\tentrez votre choix:");
    scanf("%d",&menu);
    switch(menu)
    {
    case 1:
     do{
     system("cls");
printf("\t\t*******************        BIEN VENUE A l'IUT DE DOUALA                  *******************\n");
printf("\t\t** entrer 1: pour afficher les matieres de IUT de DOUALA                 *******************\n");
printf("\t\t** entrer 2: pour enregistrer les matieres de IUT de DOUALA              *******************\n");
printf("\t\t** entrer 3: pour rechercher une matiere que vous souhaitez etudier      *******************\n");
printf("\t\t** entrer 4: pour supprimer(toujours sortir du programme avant de supprimer) une matiere ***\n");
printf("\t\t*****************************       VARUS PRO         **************************************\n");
    printf("\t\t\t\t\t\tentrez votre choix:");
    scanf("%d",&dou);
        if(dou==1){
           system("cls");
        lecture_affichage_des_matires_de_iut_douala(douala);
        system("pause");
        system("print");
        }
        if(dou==2){
         system("cls");
    printf("entrez le nombre de matiere de IUT_DOUALA que vous voulez enregistrer:");
        scanf("%d",&nb);
    enregistrement_des_matieres_de_iut_douala(nb,douala);
        }
         if(dou==3){
                 system("cls");
          recherche_iut_douala();
        }
        if(dou==4){
          system("cls");
        supprimer_iut_douala();
        }
         printf("entrer 0 pour oui revenir au menu de l'IUT de douala et 1 si non:");
  scanf("%d",&rep);
  printf("\n");
  }while(rep==0);
  break;
    case 2:
        do{
        system("cls");
printf("\t\t*******************        BIEN VENUE A l'IAI DU CAMEROUN                 *********************\n");
printf("\t\t** entrer 1: pour afficher les matieres de IAI du CAMEROUN                *********************\n");
printf("\t\t** entrer 2: pour enregistrer les matieres de IAI du CAMEROUN             *********************\n");
printf("\t\t** entrer 3: pour rechercher une matiere que vous souhaitez etudier       *********************\n");
printf("\t\t** entrer 4: pour supprime(toujours sortir du programme pour supprimer) une matiere  **********\n");
printf("\t\t*******************************      VARUS PRO      *******************************************\n");
    printf("\t\t\t\t\t\tentrez votre choix:");
    scanf("%d",&cam);
    if(cam==1){
        system("cls");
        lecture_affichage_des_matires_de_iai_cameroun(cameroun);
        system("pause");
        system("print");
    }
    if(cam==2){
         system("cls");
        printf("entrez le nombre de matiere de IAI_CAMEROUN que vous voulez enregistrer:");
        scanf("%d",&nb);
    enregistrement_des_matieres_de_iai_cameroun(nb,cameroun);
    }
    if(cam==3){
        system("cls");
        recherche_iai_cameroun();
    }
    if(cam==4){
             system("cls");
      supprimer_iai_cameroun();
    }
 printf("entrer 0 pour oui revenir au menu de l'IUT de douala et 1 si non:");
  scanf("%d",&rep);
  printf("\n");
  }while(rep==0);
  break;
    case 3:
        do{
        system("cls");
printf("\t\t*******************        BIEN VENUE A l'IUT DE BANDJOUN                   ********************\n");
printf("\t\t** entrer 1: pour afficher les matieres de IUT de BANDJOUN                  ********************\n");
printf("\t\t** entrer 2: pour enregistrer les matieres de IUT de BANDJOUN               ********************\n");
printf("\t\t** entrer 3: pour rechercher une matiere que vous souhaitez etudier         ********************\n");
printf("\t\t** entrer 4: pour supprimer(toujours sortir du programme pour supprimer) une matiere  **********\n");
printf("\t\t******************************       VARUS PRO       *******************************************\n");
    printf("\t\t\t\t\t\tentrez votre choix:");
    scanf("%d",&ban);
    if(ban==1){
        system("cls");
        lecture_affichage_des_matires_de_iut_bandjoun(bandjoun);
        system("pause");
        system("print");
    }
    if(ban==2){
            system("cls");
       printf("entrez le nombre de matiere de IUT_BANDJOUN que vous voulez enregistrer:");
        scanf("%d",&nb);
    enregistrement_des_matieres_de_iut_bandjoun(nb,bandjoun);
    }
    if(ban==3){
                system("cls");
     recherche_iut_bandjoun();
    }
    if(ban==4){
     system("cls");
        supprimer_iut_bandjoun();
    }
    printf("entrer 0 pour oui revenir au menu de l'IUT de douala et 1 si non:");
  scanf("%d",&rep);
  printf("\n");
  }while(rep==0);
    case 4:
     break;
     printf("\n");
   }
   printf("\n");
  printf("entrer 0 pour oui revenir au menu principal et 1 pour non(sa ferme totalement le programme):");
  scanf("%d",&rep);
  }while(rep==0);
}

