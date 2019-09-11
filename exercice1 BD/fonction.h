
/***********************************************************************************************/
/*les fonctions d'enregistrement, de lecture et d'ecriture des matieres de l'iut de DOUALA ******/
/************************************************************************************************/
/*fonction d'ecriture des matiere de l'iut de DOUALA danS le fichier iut_douala*/
void ecrit_dans_le_fichier_les_matieres_de_douala(matiere tableau)
{
    FILE *fichier;
    fichier=fopen("iut_douala","r");
    if(!fichier){//si on a pas encore ceer de fichier on le cree et on ecrit son entete
       /*fichier=fopen("iut_bandjoun","a");
      fprintf(fichier,"NOM\t\tCREDIT  HCM  HTD  HTP  TOTAL_HEURE  TYPE(OB/LIB)\n");
      fclose(fichier);*/
    }
  fichier=fopen("iut_douala","a+");
  fprintf(fichier,"%30s\t%2s\t%s\t%s\t%s\t%s\t%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
   fclose(fichier);
}
/*fonction d'enregistrement des matieres de l'iut de douala*/
void enregistrement_des_matieres_de_iut_douala(int n, matiere tableau[])
{
 int i;
    printf("entrez les information sur les %d matiere\n",n);
    for(i=0;i<n;i++)
    {
        printf("entrez les caracteristiques de la matiere %d\n",i+1);
        printf("NOM:");
        scanf("%s",&tableau[i].nom_matiere);
        printf("CREDIT:");
        scanf("%s",&tableau[i].credit_matiere);
        printf("heure de cours magistral:");
        scanf("%s",&tableau[i].horaire_matiere.cm);
        printf("heure de travaux diriges:");
        scanf("%s",&tableau[i].horaire_matiere.td);
        printf("heure de travaux pratique:");
        scanf("%s",&tableau[i].horaire_matiere.tp);
        printf("total horaire de la matiere:");
        scanf("%s",&tableau[i].total_horaire_matiere);
        printf("type matire OB ou LIB:");
        scanf("%s",&tableau[i].type_matiere);
      ecrit_dans_le_fichier_les_matieres_de_douala(tableau[i]);
   }
}


/*fonction de lecture et d'affichage des matiere dans le fichier iut_douala*/


void lecture_affichage_des_matires_de_iut_douala(matiere tableau[])
{
  FILE *fichier;
    int i,n =0;
    fichier = fopen("iut_douala","r");
    if(fichier != NULL){
        /*fseek(fichier,57,SEEK_SET); //on ignore la première ligne*/
        while(!feof(fichier)){
            fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau[n].nom_matiere,&tableau[n].credit_matiere,&tableau[n].horaire_matiere.cm,&tableau[n].horaire_matiere.td,&tableau[n].horaire_matiere.tp,&tableau[n].total_horaire_matiere,&tableau[n].type_matiere);
            n++;
        }
        fclose(fichier);
    }
    printf("\nListe des matieres de IUT de DOUALA :\n");
    printf("NOM\t\t\t!CREDIT\t\t!HEURE CM\t!HEURE TD\t!HEURE TP\t!TOTAL HEURE\t!TYPE(OB/LIB)\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    for(i=0; i<n; i++){
       printf("%24s!\t%2s\t!%s\t\t!%s\t\t!%s\t\t!%s\t\t!%s\n",tableau[i].nom_matiere,tableau[i].credit_matiere,tableau[i].horaire_matiere.cm,tableau[i].horaire_matiere.td,tableau[i].horaire_matiere.tp,tableau[i].total_horaire_matiere,tableau[i].type_matiere);
    printf("----------------------------------------------------------------------------------------------------------------------\n");
  }

}




/***********************************************************************************************/
/*les fonctions d'enregistrement, de lecture et d'ecriture des matieres de l'iai du CAMEROUN *****/
/************************************************************************************************/
/*fonction d'ecriture des matiere de l'iai du cameroun danS le fichier iai_cameroun*/
void ecrit_dans_le_fichier_les_matieres_de_iai(matiere tableau)
{
    FILE *fichier;
    fichier=fopen("iai_cameroun","r");
    if(!fichier){//si on a pas encore ceer de fichier on le cree et on ecrit son entete
       /*fichier=fopen("iut_bandjoun","a");
      fprintf(fichier,"NOM\t\tCREDIT  HCM  HTD  HTP  TOTAL_HEURE  TYPE(OB/LIB)\n");
      fclose(fichier);*/
    }
  fichier=fopen("iai_cameroun","a+");
  fprintf(fichier,"%30s\t%2s\t%s\t%s\t%s\t%s\t%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
   fclose(fichier);
}
/*fonction d'enregistrement des matieres de l'iai du cameroun*/
void enregistrement_des_matieres_de_iai_cameroun(int n, matiere tableau[])
{
 int i;
    printf("entrez les information sur les %d matiere\n",n);
    for(i=0;i<n;i++)
    {
        printf("entrez les caracteristiques de la matiere %d\n",i+1);
        printf("NOM:");
        scanf("%s",&tableau[i].nom_matiere);
        printf("CREDIT:");
        scanf("%s",&tableau[i].credit_matiere);
        printf("heure de cours magistral:");
        scanf("%s",&tableau[i].horaire_matiere.cm);
        printf("heure de travaux diriges:");
        scanf("%s",&tableau[i].horaire_matiere.td);
        printf("heure de travaux pratique:");
        scanf("%s",&tableau[i].horaire_matiere.tp);
        printf("total horaire de la matiere:");
        scanf("%s",&tableau[i].total_horaire_matiere);
        printf("type matire OB ou LIB:");
        scanf("%s",&tableau[i].type_matiere);
      ecrit_dans_le_fichier_les_matieres_de_iai(tableau[i]);
   }
}


/*fonction de lecture et d'affichage des matiere dans le fichier iai_cameroun*/


void lecture_affichage_des_matires_de_iai_cameroun(matiere tableau[])
{
  FILE *fichier;
    int i,n =0;
    fichier = fopen("iai_cameroun","r");
    if(fichier != NULL){
        /*fseek(fichier,57,SEEK_SET); //on ignore la première ligne*/
        while(!feof(fichier)){
            fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau[n].nom_matiere,&tableau[n].credit_matiere,&tableau[n].horaire_matiere.cm,&tableau[n].horaire_matiere.td,&tableau[n].horaire_matiere.tp,&tableau[n].total_horaire_matiere,&tableau[n].type_matiere);
            n++;
        }
        fclose(fichier);
    }
    printf("\nListe des matieres de IAI du CAMEROUN :\n");
    printf("NOM\t\t\t!CREDIT\t\t!HEURE CM\t!HEURE TD\t!HEURE TP\t!TOTAL HEURE\t!TYPE(OB/LIB)\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    for(i=0; i<n; i++){
       printf("%24s!\t%2s\t!%s\t\t!%s\t\t!%s\t\t!%s\t\t!%s\n",tableau[i].nom_matiere,tableau[i].credit_matiere,tableau[i].horaire_matiere.cm,tableau[i].horaire_matiere.td,tableau[i].horaire_matiere.tp,tableau[i].total_horaire_matiere,tableau[i].type_matiere);
    printf("----------------------------------------------------------------------------------------------------------------------\n");
  }

}



/***********************************************************************************************/
/*les fonctions d'enregistrement, de lecture et d'ecriture des matieres de l'iut de BANDJOUN *****/
/************************************************************************************************/
/*fonction d'ecriture des matiere de l'iut de bandjoun danS le fichier iut_bandjou*/
void ecrit_dans_le_fichier_les_matieres_de_bandjoun(matiere tableau)
{
    FILE *fichier;
    fichier=fopen("iut_bandjou","r");
    if(!fichier){//si on a pas encore ceer de fichier on le cree et on ecrit son entete
       /*fichier=fopen("iut_bandjoun","a");
      fprintf(fichier,"NOM\t\tCREDIT  HCM  HTD  HTP  TOTAL_HEURE  TYPE(OB/LIB)\n");
      fclose(fichier);*/
    }
  fichier=fopen("iut_bandjou","a+");
  fprintf(fichier,"%30s\t%2s\t%s\t%s\t%s\t%s\t%s\n",tableau.nom_matiere,tableau.credit_matiere,tableau.horaire_matiere.cm,tableau.horaire_matiere.td,tableau.horaire_matiere.tp,tableau.total_horaire_matiere,tableau.type_matiere);
   fclose(fichier);
}
/*fonction d'enregistrement des matieres de l'iut de bandjoun*/
void enregistrement_des_matieres_de_iut_bandjoun(int n, matiere tableau[])
{
 int i;
    printf("entrez les information sur les %d matiere\n",n);
    for(i=0;i<n;i++)
    {
        printf("entrez les caracteristiques de la matiere %d\n",i+1);
        printf("NOM:");
        scanf("%s",&tableau[i].nom_matiere);
        printf("CREDIT:");
        scanf("%s",&tableau[i].credit_matiere);
        printf("heure de cours magistral:");
        scanf("%s",&tableau[i].horaire_matiere.cm);
        printf("heure de travaux diriges:");
        scanf("%s",&tableau[i].horaire_matiere.td);
        printf("heure de travaux pratique:");
        scanf("%s",&tableau[i].horaire_matiere.tp);
        printf("total horaire de la matiere:");
        scanf("%s",&tableau[i].total_horaire_matiere);
        printf("type matire OB ou LIB:");
        scanf("%s",&tableau[i].type_matiere);
      ecrit_dans_le_fichier_les_matieres_de_bandjoun(tableau[i]);
   }
}


/*fonction de lecture et d'affichage des matiere dans le fichier iut_bandjou*/


void lecture_affichage_des_matires_de_iut_bandjoun(matiere tableau[])
{
  FILE *fichier;
    int i,n =0;
    fichier = fopen("iut_bandjou","r");
    if(fichier != NULL){
        /*fseek(fichier,57,SEEK_SET); //on ignore la première ligne*/
        while(!feof(fichier)){
            fscanf(fichier,"%30s %2s %s %s %s %s %s",&tableau[n].nom_matiere,&tableau[n].credit_matiere,&tableau[n].horaire_matiere.cm,&tableau[n].horaire_matiere.td,&tableau[n].horaire_matiere.tp,&tableau[n].total_horaire_matiere,&tableau[n].type_matiere);
            n++;
        }
        fclose(fichier);
    }
    printf("\nListe des matieres de IUT de BANDJOUN :\n");
    printf("NOM\t\t\t!CREDIT\t\t!HEURE CM\t!HEURE TD\t!HEURE TP\t!TOTAL HEURE\t!TYPE(OB/LIB)\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    for(i=0; i<n; i++){
       printf("%24s!\t%2s\t!%s\t\t!%s\t\t!%s\t\t!%s\t\t!%s\n",tableau[i].nom_matiere,tableau[i].credit_matiere,tableau[i].horaire_matiere.cm,tableau[i].horaire_matiere.td,tableau[i].horaire_matiere.tp,tableau[i].total_horaire_matiere,tableau[i].type_matiere);
    printf("----------------------------------------------------------------------------------------------------------------------\n");
  }

}

