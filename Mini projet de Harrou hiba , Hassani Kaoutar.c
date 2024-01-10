#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 

void jeuDePapierCaillouxCiseau(int tours) {
    int scoreJoueur = 0;  
    int scoreOrdinateur = 0;  

    
    char* choix[] = {"papier", "caillou", "ciseau"};
    int i;
      char coupJoueur[10];

    printf("Bienvenue dans le jeu de Papier, Caillou, Ciseau !\n");
    printf("Vous avez %d opportunites.\n", tours);

    for ( i = 0; i < tours; i++) {
        printf("\nOpportunite %d\n", i+1);

      
        printf("Choisissez votre coup (papier, caillou, ciseau): ");
        scanf("%s", coupJoueur);

       
        int coupOrdinateur = rand() % 3;

        printf("L'ordinateur choisit: %s\n", choix[coupOrdinateur]);

        
        if (strcmp(coupJoueur, choix[coupOrdinateur]) == 0) {
            printf("Egalité !\n");
        } else if ((strcmp(coupJoueur, "papier") == 0 && strcmp(choix[coupOrdinateur], "caillou") == 0) ||
                   (strcmp(coupJoueur, "caillou") == 0 && strcmp(choix[coupOrdinateur], "ciseau") == 0) ||
                   (strcmp(coupJoueur, "ciseau") == 0 && strcmp(choix[coupOrdinateur], "papier") == 0)) {
            printf("Vous avez gagne cette manche !\n");
            scoreJoueur++;
        } else {
            printf("L'ordinateur a gagne cette manche.\n");
            scoreOrdinateur++;
        }
    }

    
    printf("\nResultat final:\n");
    if (scoreJoueur > scoreOrdinateur) {
        printf("Vous avez gagne le jeu felicitation !\n");
    } else if (scoreJoueur < scoreOrdinateur) {
        printf("L'ordinateur a gagne le jeu\n");
    } else {
        printf("Le jeu s'est termine par une egalite\n");
    }
}

int main() {
    int tours = 3;  
    jeuDePapierCaillouxCiseau(tours);
    return 0;
}
