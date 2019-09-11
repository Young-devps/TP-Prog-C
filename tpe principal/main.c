#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define t 5


typedef struct etudiant {
    char  Matricule[7];         // structure etudiant
    char  nom[20];
    float note[6];
} ETUDIANT ;
ETUDIANT e;
ETUDIANT *ptr;


typedef struct liste_etudiant {
    ETUDIANT *tab;
    int  size;           // structure liste des étudiants
    int  libre;
} LISTE_ETUDIANT;
LISTE_ETUDIANT *ple;
  LISTE_ETUDIANT *tple;

  void affiche_menu();
        LISTE_ETUDIANT* creation_le(int n);
            int vide (LISTE_ETUDIANT le);
                int plein_le (LISTE_ETUDIANT le);
                    void lire(ETUDIANT *ptr);
                        void ajout_le(LISTE_ETUDIANT *ple,ETUDIANT *ptr);
                            void trie_liste( LISTE_ETUDIANT *ple);
                        int search1(LISTE_ETUDIANT *ple);
                    int search( LISTE_ETUDIANT *ple);
                int delete_le(LISTE_ETUDIANT *ple);
            void open_file(LISTE_ETUDIANT *ple);
        void save_to_file(LISTE_ETUDIANT *ple);
void afficher_le (LISTE_ETUDIANT *ple);

//_________________________________fonction principale_________________________________________________

int main()
{
   int val,choix,i,x;
   LISTE_ETUDIANT *ple;
   ETUDIANT e;

        ple=creation_le(t);
                do{
                    affiche_menu();
                    printf(" Saisir ici:\t");
                    scanf("%d",&val);

                        while (val<1 || val>8)
                            {
                                printf(" \tCe numero ne figure pas dans la liste\n");
                                printf(" \tQue voulez-vous faire ?\n");
                                system("cls");
                                affiche_menu();
                                printf(" \tCe numero ne figure pas dans la liste\n");
                                printf(" \tQue voulez-vous faire ?\n");
                                printf(" Saisir ici:\t");
                                scanf("%d",&val);
                            }

                    switch (val)
                        {
                            case 1:
                              lire(&e);
                              ajout_le(ple,&e);
                              break;
                            case 2:
                              delete_le(ple);
                              break;
                            case 3:
                              trie_liste(ple);
                              break;
                            case 4:
                             afficher_le(ple);
                              break;
                            case 5:
                             x=search(ple);
                               if (x==0)
                                printf(" cet etudiant n'existe pas");
                              break;
                            case 6:
                              open_file(ple);
                              break;
                            case 7:
                              save_to_file(ple);
                              break;
                            default:
                              printf(" \n\t*********** AUREVOIR *************\n ");
                              return 0;
                              break;
                        }

                                 printf("Appuyer sur 0 pour continuer ou 8 pour quitter");
                            scanf("%d",&choix);
                                system("cls");

                }while(choix==0);
            printf(" \t*********** AUREVOIR *************\n ");

    return 0;
}

/*_____________________________________________________________________________________________________________________*/

//_______________________fonction afficher_menu______________________________________
void affiche_menu()
{
     printf("\t  *********************** MENU ******************************* \n\n");
        printf("\t 1.  Ajouter un etudiant \n");
            printf("\t 2.  Supprimer un etudiant  \n");
                printf("\t 3.  Trier les étudiants par moyenne croissante  \n");
                    printf("\t 4.  Afficher les étudiants \n");
                        printf("\t 5.  Rechercher un étudiant  \n");
                    printf("\t 6.  Ouvrir le fichier des étudiants  \n");
                printf("\t 7.  Enregistrer dans un fichier  \n");
            printf("\t 8.  Quitter  \n");
        printf("\t Que voulez-vous faire ? ..(Entrez un chiffre)  \n\n");
      printf("\t ************************************************************ \n\n");

return ;
}
//_______________________fonction cretion liste_etudiant______________________________________

LISTE_ETUDIANT* creation_le(int n)
{
  LISTE_ETUDIANT *ple;
    ple=(LISTE_ETUDIANT*)malloc(sizeof(LISTE_ETUDIANT));
        ple->tab=(ETUDIANT*)malloc(sizeof(ETUDIANT)*n);
    ple->size=n;
  ple->libre=0;

  return ple;
}

//_______________________fonction vider liste des etudiants______________________________________

int vide (LISTE_ETUDIANT le)
{
    if(le.libre==0)
        return 1;
    else
        return 0;
}
//_______________________fonction plein liste des etudiants______________________________________

int plein_le (LISTE_ETUDIANT le)
{
    if(le.libre==le.size)
        return 1;
    else
        return 0;
}
//_______________________fonction lire  un etudiant___________________________________________

void lire(ETUDIANT *ptr)
{
    int i;
        printf(" Entrez le matricule : ");
        scanf("%s",&(ptr->Matricule));
        printf(" Entrez le nom :");
        scanf("%s",&(ptr->nom));
    for(i=1;i<=4;i++)
    {
        printf(" Entrez la note %d:",i);
        scanf("%f",&(ptr->note)[i]);

    }

}
//_______________________fonction ajout  d'un etudiant dans la liste___________________________________________

  void ajout_le(LISTE_ETUDIANT *ple,ETUDIANT *ptr)
{
    int y,i,j;
    float summoy=0,moygen;
        i=ple->libre;
        y=plein_le(*ple);
            if(y==1)
                {
                    printf(" \nEchec d'enregistrement ***LA LISTE EST PLEINE**\n");
                }
            else
                {
                        strcpy((ple->tab)[i].Matricule,ptr->Matricule);
                        strcpy((ple->tab)[i].nom,ptr->nom);

                        for(j=1;j<=4;j++)
                        {
                            (ple->tab)[i].note[j]=ptr->note[j];
                        }
                             for(j=1;j<=4;j++)
                                {
                                     summoy=summoy+(ple->tab)[i].note[j];
                                }
                                     moygen=summoy/4;
                                (ple->tab)[i].note[5]=moygen;
                            printf(" \t\******* Succes d'ajout *******/ \n");
                        ple->libre=ple->libre+1;

               }

}
//_______________________fonction trie_liste d'etudiant___________________________________________

 void trie_liste( LISTE_ETUDIANT *ple)
 {
    int i,j,min,val,nbre,x;
    float y,z;
        LISTE_ETUDIANT *tple;
        tple=(LISTE_ETUDIANT*)malloc(sizeof(LISTE_ETUDIANT));
        tple->tab=(ETUDIANT*)malloc(sizeof(ETUDIANT)*t);
    x=ple->libre;


    for(i=0;i<x;i++)
      {
            (tple->tab)[i]=(ple->tab)[i];
            j=i;
            y=(ple->tab)[j-1].note[5];
            z=(tple->tab)[i].note[5];

             while(j>0 && y>z)
              {
                  (ple->tab)[j]=(ple->tab)[j-1];
                  j=j-1;
              }
            (ple->tab)[j]=(tple->tab)[i];
      }
         printf(" \t La Liste est desormais trie\n");
 }
//________________________________fonction Recherche d'un etudiant dans la liste__________________

  int search1(LISTE_ETUDIANT *ple)
  {
      int i,x,y,ind;
      char matri[7];
       x=ple->libre;

            printf("Entrez le matricule de cet etudiant:");
            scanf("%s",matri);
        for(i=0;i<x;i++)
            {
                y=strcmp((ple->tab)[i].Matricule,matri);
              if(y==0)
                {
                return i;
                }
            }
      return -1;
  }

//________________________________fonction Recherche d'un etudiant dans la liste__________________

  int search( LISTE_ETUDIANT *ple)
 {
     int i,x,y,j;
     char matri[7];
      x=ple->libre;
            printf("Entrez le matricule de cet etudiant:");
                scanf("%s",matri);
        for(i=0;i<x;i++)
            {
                    y=strcmp((ple->tab)[i].Matricule,matri);
                if(y==0)
                    {
                        printf(" Un etudiant trouve \n\t");
                        printf("%s ",(ple->tab)[i].Matricule);
                        printf("\t%s\t",(ple->tab)[i].nom);
                     for(j=1;j<=4;j++)
                        {
                            printf("%f\t",(ple->tab)[i].note[j]);
                        }
                        printf(" Moy:%f",(ple->tab)[i].note[5]);
                        printf("\n");
                            return 1;
                    }
            }
       return 0;

 }
 //________________________________fonction Supprimer un etudiant________________________________________

 int delete_le(LISTE_ETUDIANT *ple)
 {
   int x,i,k;
   char matri[7];
        x=ple->libre;
        k=search1(ple);
            if(k==-1)
                {
                    printf(" \t*** Cet etudiant n'existe pas***** \n");
                        return 0;
                }
                else
                {
                    for(i=k;i<x;i++)
                        {
                            (ple->tab)[i]=(ple->tab)[i+1];
                        }
                    ple->libre=ple->libre-1;
                    printf(" \t\******* Succes de suppression *******/\n");
                }
        return 0;
 }
    //________________________________fichier_open liste d' etudiant________________________________________

   void open_file(LISTE_ETUDIANT *ple)
   {
       int x,i,j,y;
       x=ple->libre;
       FILE *fichier;
       fichier = fopen("etudiant.xls","r");

         if(fichier!= NULL)
            {
                printf(" \tLe fichier contient les elements suivants : \n");
                char c=0;
                    do
                        {
                            c=fgetc(fichier);
                            if (c != EOF)
                                {
                                    putchar(c);
                                }

                        } while(c!=EOF);
                fclose(fichier);

            }
            else
                printf(" \tEchec lors de l'ouverture ( le fichier n'existe pas)\n");
         return 0;
   }


    //________________________________fonction Save liste d' etudiant________________________________________

     void save_to_file(LISTE_ETUDIANT *ple)
     {
      int x,i,j,y;
       FILE *fichier;
       fichier=fopen("etudiant.xls","a");
       x=ple->libre;
       
        if(x==0)
           {
           	printf(" Echec la liste des etudiants est vide \n");
           }
		   else
             {
            for(i=0;i<x;i++)
                {
                	
                   fprintf(fichier,"%s ",(ple->tab)[i].Matricule);
                   fprintf(fichier,"\t%s\t",(ple->tab)[i].nom);
                        for(j=1;j<=4;j++)
                            {
                                fprintf(fichier,"%f\t",(ple->tab)[i].note[j]);
                            }
                    fprintf(fichier,"Moy : %f",(ple->tab)[i].note[5]);
                    fprintf(fichier,"\n");
                }
        fclose(fichier);
                    printf(" /*   Succes d'enregistrement     */ \n");
             }
     }

  //________________________________fonction afficher la liste d' etudiant________________________________________


   void afficher_le (LISTE_ETUDIANT *ple)
   {
       int i,j,x;
       x=ple->libre;
            for(i=0;i<x;i++)
                {
                    printf("%s ",(ple->tab)[i].Matricule);
                    printf("\t%s\t",(ple->tab)[i].nom);
                        for(j=1;j<=4;j++)
                            {
                                printf("%f\t",(ple->tab)[i].note[j]);
                            }
                    printf("Moy:%f",(ple->tab)[i].note[5]);
                    printf("\n");
                }
            printf(" \t// %d etudiant(s) existant //\t\n",ple->libre);
   }

   /*_______________________________FIN DU PROGRAMME_____________________________________________*/


