
/*fonction de recherche d'une matiere dans le fichier iai_cameroun*/

void recherche_iai_cameroun()
{
    FILE *fichier;
    char name[100];
    matiere tableau;
    int trouver;
    printf("entrer le nom de la matiere que vous cherchez:");
    scanf("%s",&name);
    fflush(stdin);
    trouver=0;
    fichier=fopen("iai_cameroun","r");
    {
        fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau.nom_matiere,&tableau.credit_matiere,&tableau.horaire_matiere.cm,&tableau.horaire_matiere.td,&tableau.horaire_matiere.tp,&tableau.total_horaire_matiere,&tableau.type_matiere);
        if(!strcmp(tableau.nom_matiere,name))
        {
            trouver=1;
            printf("les information sur la matiere sont:\n");
             printf("NOM\t\t\t!CREDIT\t\t!HEURE CM\t!HEURE TD\t!HEURE TP\t!TOTAL HEURE\t!TYPE(OB/LIB)\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
       printf("%24s!\t%2s\t!%s\t\t!%s\t\t!%s\t\t!%s\t\t!%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
    printf("----------------------------------------------------------------------------------------------------------------------\n");
        }
    }while(!trouver && !feof(fichier));
    if (!trouver){printf("Non repertorie. \n");}
    fclose(fichier);
}

/*fonction de recherche d'une matiere dans le fichier iut_bandjoun*/

void recherche_iut_bandjoun()
{
    FILE *fichier;
    char name[100];
    matiere tableau;
    int trouver;
    printf("entrer le nom de la matiere que vous cherchez:");
    scanf("%s",&name);
    fflush(stdin);
    trouver=0;
    fichier=fopen("iut_bandjou","r");
    do
    {
        fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau.nom_matiere,&tableau.credit_matiere,&tableau.horaire_matiere.cm,&tableau.horaire_matiere.td,&tableau.horaire_matiere.tp,&tableau.total_horaire_matiere,&tableau.type_matiere);
        if(!strcmp(tableau.nom_matiere,name))
        {
            trouver=1;
            printf("les information sur la matiere sont:\n");
             printf("NOM\t\t\t!CREDIT\t\t!HEURE CM\t!HEURE TD\t!HEURE TP\t!TOTAL HEURE\t!TYPE(OB/LIB)\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
       printf("%24s!\t%2s\t!%s\t\t!%s\t\t!%s\t\t!%s\t\t!%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
    printf("----------------------------------------------------------------------------------------------------------------------\n");
        }
    }while(!trouver && !feof(fichier));
    if (!trouver){printf("Non repertorie. \n");}
    fclose(fichier);
}

/*fonction de recherche d'une matiere dans le fichier iut_douala*/

void recherche_iut_douala()
{
    FILE *fichier;
    char name[100];
    matiere tableau;
    int trouver;
    printf("entrer le nom de la matiere que vous cherchez:");
    scanf("%s",&name);
    fflush(stdin);
    trouver=0;
    fichier=fopen("iut_douala","r");
    do
    {
        fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau.nom_matiere,&tableau.credit_matiere,&tableau.horaire_matiere.cm,&tableau.horaire_matiere.td,&tableau.horaire_matiere.tp,&tableau.total_horaire_matiere,&tableau.type_matiere);
        if(!strcmp(tableau.nom_matiere,name))
        {
            trouver=1;
            printf("les information sur la matiere sont:\n");
             printf("NOM\t\t\t!CREDIT\t\t!HEURE CM\t!HEURE TD\t!HEURE TP\t!TOTAL HEURE\t!TYPE(OB/LIB)\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
       printf("%24s!\t%2s\t!%s\t\t!%s\t\t!%s\t\t!%s\t\t!%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
    printf("----------------------------------------------------------------------------------------------------------------------\n");
        }
    }while(!trouver && !feof(fichier));
    if (!trouver){printf("Non repertorie. \n");}
    fclose(fichier);
}

/*fonction de suppretion d'une matiere a partie de son nom dans le fichier iai_cameroun*/

void supprimer_iai_cameroun()
{
     FILE *fichier;
    char name[100];
    matiere tableau;
    char nbr;
    int trouver;
    printf("entrer le nom de la matiere que vous cherchez:");
    scanf("%s",&name);
    fflush(stdin);
    trouver=0;
    fichier=fopen("iai_cameroun","r");
    do
    {
        fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau.nom_matiere,&tableau.credit_matiere,&tableau.horaire_matiere.cm,&tableau.horaire_matiere.td,&tableau.horaire_matiere.tp,&tableau.total_horaire_matiere,&tableau.type_matiere);
        if(!strcmp(tableau.nom_matiere,name))
         {
            trouver=1;
            printf("NOM\t\t\t!CREDIT\t\t!HEURE CM\t!HEURE TD\t!HEURE TP\t!TOTAL HEURE\t!TYPE(OB/LIB)\n");
       printf("-----------------------------------------------------------------------------------------------------------------------\n");
       printf("%24s!\t%2s\t!%s\t\t!%s\t\t!%s\t\t!%s\t\t!%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
    printf("----------------------------------------------------------------------------------------------------------------------\n");

         }
    }while(!trouver && !feof(fichier));
    if (!trouver){printf("Non repertorie. \n");}
    fclose(fichier);
    printf("voulez vous vraimment supprimer o/n?\n");
    printf("entrer o ou O si le nom est repertorie et n si non:");
            scanf("%c",&nbr);
             if(nbr=='o' || nbr=='O')
             {
                 FILE *fichier,*k;
                 fichier=fopen("iai_cameroun","r");
                 k=fopen("c","a");
                 do
                 {
                 fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau.nom_matiere,&tableau.credit_matiere,&tableau.horaire_matiere.cm,&tableau.horaire_matiere.td,&tableau.horaire_matiere.tp,&tableau.total_horaire_matiere,&tableau.type_matiere);
                 if(strcmp(tableau.nom_matiere,name))
                   {
                       trouver=0;
                 fprintf(k,"%30s\t%2s\t%s\t%s\t%s\t%s\t%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
                   }
                 }while(!feof(fichier));
                 fclose(k);
                 fclose(fichier);
                 remove("iai_cameroun");
                 rename("c","iai_cameroun");
                 printf("la suppression effectuee avec succes\n");
            }
}





/*fonction de suppretion d'une matiere a partie de son nom dans le fichier iut_douala*/

void supprimer_iut_douala()
{
     FILE *fichier;
    char name[100];
    matiere tableau;
    char nbr;
    int trouver;
    printf("entrer le nom de la matiere que vous cherchez:");
    scanf("%s",&name);
    fflush(stdin);
    trouver=0;
    fichier=fopen("iut_douala","r");
    do
    {
        fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau.nom_matiere,&tableau.credit_matiere,&tableau.horaire_matiere.cm,&tableau.horaire_matiere.td,&tableau.horaire_matiere.tp,&tableau.total_horaire_matiere,&tableau.type_matiere);
        if(!strcmp(tableau.nom_matiere,name))
         {
            trouver=1;
            printf("NOM\t\t\t!CREDIT\t\t!HEURE CM\t!HEURE TD\t!HEURE TP\t!TOTAL HEURE\t!TYPE(OB/LIB)\n");
       printf("-----------------------------------------------------------------------------------------------------------------------\n");
       printf("%24s!\t%2s\t!%s\t\t!%s\t\t!%s\t\t!%s\t\t!%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
    printf("----------------------------------------------------------------------------------------------------------------------\n");

         }
    }while(!trouver && !feof(fichier));
    if (!trouver){printf("Non repertorie. \n");}
    fclose(fichier);
    printf("voulez vous vraimment supprimer o/n?\n");
    printf("entrer o ou O si le nom est repertorie et n si non:");
            scanf("%c",&nbr);
             if(nbr=='o' || nbr=='O')
             {
                 FILE *fichier,*f;
                 fichier=fopen("iut_douala","r");
                 f=fopen("d","a");
                 do
                 {
                 fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau.nom_matiere,&tableau.credit_matiere,&tableau.horaire_matiere.cm,&tableau.horaire_matiere.td,&tableau.horaire_matiere.tp,&tableau.total_horaire_matiere,&tableau.type_matiere);
                 if(strcmp(tableau.nom_matiere,name))
                   {
                       trouver=0;
                 fprintf(f,"%30s\t%2s\t%s\t%s\t%s\t%s\t%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
                   }
                 }while(!feof(fichier));
                 fclose(f);
                 fclose(fichier);
                 fclose(f);
                 remove("iut_douala");
                 rename("d","iut_douala");
                 printf("la suppression effectuee avec succes\n");
            }

}


/*fonction de suppretion d'une matiere a partie de son nom dans le fichier iut_bandjoun*/

void supprimer_iut_bandjoun()
{
     FILE *fichier;
    char name[100];
    matiere tableau;
    char nbr;
    int trouver;
    printf("entrer le nom de la matiere que vous cherchez:");
    scanf("%s",&name);
    fflush(stdin);
    trouver=0;
    fichier=fopen("iut_bandjou","r");
    do
    {
        fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau.nom_matiere,&tableau.credit_matiere,&tableau.horaire_matiere.cm,&tableau.horaire_matiere.td,&tableau.horaire_matiere.tp,&tableau.total_horaire_matiere,&tableau.type_matiere);
        if(!strcmp(tableau.nom_matiere,name))
         {
            trouver=1;
            printf("NOM\t\t\t!CREDIT\t\t!HEURE CM\t!HEURE TD\t!HEURE TP\t!TOTAL HEURE\t!TYPE(OB/LIB)\n");
       printf("-----------------------------------------------------------------------------------------------------------------------\n");
       printf("%24s!\t%2s\t!%s\t\t!%s\t\t!%s\t\t!%s\t\t!%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
    printf("----------------------------------------------------------------------------------------------------------------------\n");

         }
    }while(!trouver && !feof(fichier));
    if (!trouver){printf("Non repertorie. \n");}
    fclose(fichier);
    printf("voulez vous vraimment supprimer o/n?\n");
    printf("entrer o ou O si le nom est repertorie et n si non:");
            scanf("%c",&nbr);
             if(nbr=='o' || nbr=='O')
             {
                 FILE *fichier,*h;
                 fichier=fopen("iut_bandjou","r");
                 h=fopen("b","a");
                 do
                 {
                 fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau.nom_matiere,&tableau.credit_matiere,&tableau.horaire_matiere.cm,&tableau.horaire_matiere.td,&tableau.horaire_matiere.tp,&tableau.total_horaire_matiere,&tableau.type_matiere);
                 if(strcmp(tableau.nom_matiere,name))
                   {
                       trouver=0;
                 fprintf(h,"%30s\t%2s\t%s\t%s\t%s\t%s\t%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
                   }
                 }while(!feof(fichier));
                 fclose(h);
                 fclose(fichier);
                 remove("iut_bandjou");
                 rename("b","iut_bandjou");
                 printf("la suppression effectuee avec succes\n");
            }
}


