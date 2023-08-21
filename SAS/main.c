#include <stdio.h>
#include <stdlib.h>
void ajouter()// La partie 1 de Ajouter
{
    int id,k;
    char status[100];
    char titre[100];
    char description[500];

    printf("identifiant:%d",k+1);//identifiant
    k++;
    printf("\nTitre:");//titre
    getchar();
    gets(titre);
    printf("description:");//description
    gets(description);
    printf("status:");
    gets(status);
}

void addlist() {}
void removelist() {}

int main()
{
    int choix;


    puts("     /============================================================\\");
    puts("                                  MENU                             ");
    puts("     \\============================================================/");

    puts("------------------>1. Ajouter une nouvelle tache");
    puts("------------------>2. Ajouter plusieurs nouvelles taches");
    puts("------------------>3. Afficher la liste de toutes les taches");
    puts("------------------>4. Modifier une tache:");
    puts("------------------>5. Supprimer une tache par identifiant");
    puts("------------------>6. Statistiques");
    puts("------------------>7. Rechercher les Taches");

    printf("-->> ");
    scanf("%d",&choix);




    while(choix==1 || choix==2)
    {
        switch(choix)

        {
            int n;
        case 1:
            printf("    1. Ajouter une nouvelle tache:\n");
                ajouter();
            return;
            break;
        case 2:
            printf("    2. Ajouter plusieurs nouvelles taches:\n");
            printf("combien de taches souhaitez-vous ajouter: ");
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                    ajouter();
            }
            return;
            break;
        case 3:
            printf("    3. Afficher la liste de toutes les taches:\n");
            break;
        case 4:
            printf("    4. Modifier une tache:\n");
            break;
        case 5:
            printf("    5. Supprimer une tache par identifiant:\n");
            break;
        case 6:
            printf("    6. Statistiques:\n");
            break;
        case 7:
            printf("7. Rechercher les Taches:\n");
            break;
        }

    }







    return 0;
}
