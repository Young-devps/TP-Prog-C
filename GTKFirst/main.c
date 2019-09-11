#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32
#include "gtk.h"

void onbuttonR(GtkWidget *pbouton,gpointer data);
 const char *recupere1;//constante qui vont récuperer les données entrer par l'utilisateur dans le formulaire
 const char *recupere2;
 const int *recupere3;

int main(int argc,char **argv)
{
  GtkWidget *pwindow;
  GtkWidget *pvbox;
  GtkWidget *pframe;
  GtkWidget *pvboxframe;
  GtkWidget *pentry0;
  GtkWidget *pentry1;
  GtkWidget *pentry2;
  GtkWidget *plabel;
  GtkWidget *pbouton;
  GtkWidget *pbouton1;
gchar *sutf8;


  gtk_init(&argc,&argv);

  //creation de la fenetre
  pwindow=gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(pwindow),"MANDATS");
  gtk_window_set_default_size(GTK_WINDOW(pwindow),480,200);
  gtk_window_set_resizable(GTK_WINDOW(pwindow),TRUE);
  g_signal_connect(G_OBJECT(pwindow), "destroy", G_CALLBACK(gtk_main_quit),NULL);
  //creation de la pvbox
  pvbox=gtk_vbox_new(FALSE,5);
 gtk_container_add(GTK_CONTAINER(pwindow),pvbox);
 pframe=gtk_frame_new("ORDONATEUR :");
 gtk_box_pack_start(GTK_BOX(pvbox),pframe, TRUE, FALSE, 5);
 pvboxframe=gtk_vbox_new(TRUE, 5);
 gtk_container_add(GTK_CONTAINER(pframe),pvboxframe);
 plabel=gtk_label_new("DESIGNATION DU CREANCIER :");
 gtk_box_pack_start(GTK_BOX(pvboxframe),plabel,TRUE,FALSE,5);
 pentry0=gtk_entry_new();
 recupere1=gtk_entry_get_text(GTK_ENTRY(pentry0));//ligne qui permet de recuper la donnée concernant designation du creancier
 gtk_box_pack_start(GTK_BOX(pvboxframe),pentry0,TRUE,FALSE,5);
sutf8=g_locale_to_utf8("OBJET DE LA DEMANDE :", -1,NULL,NULL,NULL);
 plabel=gtk_label_new(sutf8);
 g_free(sutf8);
 gtk_box_pack_start(GTK_BOX(pvboxframe),plabel,TRUE,FALSE,5);
 pentry1=gtk_entry_new();
  recupere2=gtk_entry_get_text(GTK_ENTRY(pentry1));//ligne qui va recupere la donner concernant objet de la demande
 gtk_box_pack_start(GTK_BOX(pvboxframe),pentry1,TRUE,FALSE,5);
plabel=gtk_label_new("BUDJET:");
 gtk_box_pack_start(GTK_BOX(pvboxframe),plabel,TRUE,FALSE,5);
 pentry2=gtk_entry_new();
  recupere3=gtk_entry_get_text(GTK_ENTRY(pentry2));//ligne permettant de recuperer la donner concernant le budget
 gtk_box_pack_start(GTK_BOX(pvboxframe),pentry2,TRUE,FALSE,5);
//ajout du menu a la fenetre
gtk_box_pack_start(GTK_BOX(pvbox),pentry2,TRUE,FALSE,5);
pbouton=gtk_button_new_with_label("Enregistrer");
//boutton se connecter
gtk_box_pack_start(GTK_BOX(pvbox),pbouton, FALSE ,FALSE,0);
pbouton1=gtk_button_new_with_label("Annuler");
//boutton se connecter
gtk_box_pack_start(GTK_BOX(pvbox),pbouton1, FALSE ,FALSE,0);
g_signal_connect(G_OBJECT(pbouton1), "clicked", G_CALLBACK(gtk_main_quit),pvbox);
g_signal_connect(G_OBJECT(pbouton), "clicked", G_CALLBACK(onbuttonR),pvbox);//ici lorsqu'on cliquera sur le boutton enrégidtrer ca appelera la procdure onbuttonR qui ira dans un fichier enrégistrer ces donner
  gtk_widget_show_all(pwindow);
  gtk_main();
  return EXIT_SUCCESS;
}
void onbuttonR(GtkWidget *pbouton,gpointer data)
//procedure permettant d'enregistrer les donnéés entrer dans le FICHIER
{
 FILE *fichier=NULL;
fichier=fopen("ENGAGEMENTS.txt","a");

             if(fichier != NULL)
                {
       fprintf(fichier,"=============BIENVENUE A VOUS=============n\n ===============vVOUS AVEZ DANS CE FICHIER LA LISTE DES MANDATS DE LA COMMUNE DE DEMDENG=============\n");
       fprintf(fichier,"----ORDONATEUR----DESIGNATION DU CREANCIER-------BUDJET----- \n");
       fprintf(fichier,"      %s          %s         %s         \n",recupere1,recupere2,recupere3);//ici les donner que j'ai recuperer dans le formulaire grace a recupere1,recupere2,recupere3 je l'insere dans le fichier


      }
         fclose(fichier);
}


