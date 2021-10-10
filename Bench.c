#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>
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

void Bench_selection(char *filename,int a[][3],int n) {

    //initialisation Tri_tas
    clock_t debut, fin;
    double temps, moy;

    //Ouverture et creation du fichier csv
    FILE *fp;
    int i,j,m=1;
    filename=strcat(filename,".csv"); //Ajouter l'extention csv au fichier
    fp=fopen(filename,"w+"); //Ouvrir le fichier en ecriture
    fprintf(fp,"         Tri_selection");

    //Creation du tableau qui sera integré au fichier
    printf("\nTraitement en cours...\n");
    for (int k = 2; k < 6; k++) {
        moy = 0;
        int size = pow(10, k);
        for (int i = 0; i < 3; i++) {
            int g = 1;
            float *t = getTab(size, g);
            debut = clock();
            Tri_selection(t, size);
            fin = clock();
            temps = ((double) fin - debut) / CLOCKS_PER_SEC;
            moy += temps;

            fprintf(fp,"\n%d",size); //Aficher en colone le nombre de valeurs dans le tableau

            for(i=0;i<m;i++){
                fprintf(fp, "      %.4f ", moy / 3); //Afficher la moyenne des 3 temps pour X nombre de valeur
                i++;
            }
            g++;
        }
    }

    fclose(fp);//Fermer le fichier

}


void Bench_insertion(char *filename,int a[][3],int n) {
    //initialisation insertion
    clock_t debut, fin;
    double temps, moy;

    FILE *fp;
    int i,j,m=1;
    filename=strcat(filename,".csv");
    fp=fopen(filename,"w+");
    fprintf(fp,"         Tri_insertion");

    printf("\nTraitement en cours...\n");

    for (int k = 2; k < 6; k++) {
        moy = 0;
        int size = pow(10, k);
        for (int i = 0; i < 3; i++) {
            int g = 1;
            float *t = getTab(size, g);
            debut = clock();
            Tri_insertion(t, size);
            fin = clock();
            temps = ((double) fin - debut) / CLOCKS_PER_SEC;
            moy += temps;

            fprintf(fp, "\n%d", size);

            for (i = 0; i < m; i++) {
                fprintf(fp, "      %.4f ", moy / 3);
                i++;
            }

            g++;
        }
    }
    fclose(fp);
}

void Bench_bulle(char *filename,int a[][3],int n){
    //initialisation Tri_tas
    clock_t debut,fin;
    double temps, moy;

    FILE *fp;
    int i,j,m=1;
    filename=strcat(filename,".csv");
    fp=fopen(filename,"w+");
    fprintf(fp,"         Tri_bulle");

    printf("\nTraitement en cours...\n");

    for(int k=2;k<6;k++){//on ne monte pas au dessus de 10puissance 5
        moy = 0;
        int size = pow(10,k);
        for(int i = 0 ; i<3;i++){
            int g = 1;
            float *t = getTab(size,g);
            debut = clock();
            Tri_bulle(t,size);
            fin = clock();
            temps = ((double)fin-debut) / CLOCKS_PER_SEC;
            moy+=temps;

            fprintf(fp,"\n%d",size);

            for(i=0;i<m;i++){
                fprintf(fp, "      %.4f ", moy/3);
                i++;
            }
            g++;
        }
    }
    fclose(fp);
}


void Bench_Tas(char *filename,int a[][3],int n){
    //initialisation Tri_tas
    clock_t debut,fin;
    double temps, moy;

    FILE *fp;
    int i,j,m=1;
    filename=strcat(filename,".csv");
    fp=fopen(filename,"w+");
    fprintf(fp,"         Tri_tas");

    printf("\nTraitement en cours...\n");

    for(int k=2;k<7;k++){
        moy = 0;
        int size = pow(10,k);
        for(int i = 0 ; i<3;i++){
            int g = 1;
            float *t = getTab(size,g);
            debut = clock();
            Tri_tas(t,size);
            fin = clock();
            temps = ((double)fin-debut) / CLOCKS_PER_SEC;
            moy+=temps;

            fprintf(fp, "\n%d", size);

            for (i = 0; i < m; i++) {
                fprintf(fp, "      %.4f ", moy / 3);
                i++;
            }

            g++;
        }
    }
    fclose(fp);
    printf("\n   %s file created\n",filename);
}


