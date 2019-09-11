

typedef struct horaire horaire;
typedef struct matiere matiere;
typedef struct UE UE;

struct horaire
{
    char cm[12];
    char td[12];
    char tp[12];
};

struct matiere
{
    char nom_matiere[100];
    char credit_matiere[30];
    struct horaire horaire_matiere;
    char total_horaire_matiere[30];
    char type_matiere[30];
};

struct UE
{
   char matiere_ue[200];
   char code_ue[12];
};

