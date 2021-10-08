#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Fonctions.h"


float *getTab(int size, int graine)
{
    float *tab = (float*) malloc(sizeof(float) * size);
    srand(graine); // Graine
    for (int i=0; i < size; i++)
    {
        tab[i] = ((float)rand() / (float)(RAND_MAX)) * size;
    }
    return tab;
}


int main() {
    //initialisation
        int i, size=100000, g = 2;
        float *tab= getTab(size,g);
        float result;


    //Initialisation du timer
        clock_t debut,fin;
        double temps;

    //Debut de mesure de temps
        debut = clock();



    //Appelle de fonction
        //Tri_selection(tab, size);
        //Tri_bulle(tab, size);
        //Tri_insertion(tab, size);
        Tri_tas(tab, size);

    printf("\n");
    for (i=0;i<size;i++) {
        printf("%.2f\n ", tab[i]);
    }


    //Fin de mesure de temps
        fin = clock();

    //Stockage et affichage du temps
        temps = ((double)fin-debut) / CLOCKS_PER_SEC;
        printf("\n\nTemps d'execution : %.4f",temps);


    printf("\n");
    return 0;
}
