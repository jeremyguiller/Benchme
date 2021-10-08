#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Tri_selection.h"
#include "Tri_bulle.h"

int main() {
    //initialisation
        int i, size=100;
        float tab[size], result;

    //Initialisation du timer
        clock_t debut,fin;
        double temps;

    //Debut de mesure de temps
        debut = clock();

    //Creation de nombres aleratoires
        for (int i=0;i<size;i++){
            result = ((float)rand()/(float)(RAND_MAX)) * 1000000.0;
            tab[i]=result; //Insersion des valeurs dans le tableau
        }

    //Appelle de fonction
        //Tri_selection(tab, size);
        //Tri_bulle(tab, size);
        //Tri_insersion(tab, size);
        //Tri_tas(tab, size);


    //Affichage
        printf("\n");
        for (i=0;i<size;i++){
            printf("%.1f ",tab[i]);
        }

    //Fin de mesure de temps
        fin = clock();

    //Stockage et affichage du temps
        temps = ((double)fin-debut) / CLOCKS_PER_SEC;
        printf("\n\nTemps d'execution : %.8f",temps);


    printf("\n");
    return 0;
}
