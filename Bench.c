//
// Created by j.guillerminprina on 08/10/2021.
//
#include <stdio.h>
#include <time.h>
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

void Bench_Tas(){
    //initialisation Tri_tas
    clock_t debut,fin;
    double temps, moy;
    for(int k=2;k<8;k++){
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
            g++;
        }
        printf("\n\nTemps d'execution : %.4f",moy/3);
    }
}
void Bench_bulle(){
    //initialisation Tri_tas
    clock_t debut,fin;
    double temps, moy;
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
            g++;
        }
        printf("\n\nTemps d'execution : %.4f",moy/3);
    }
}
void Bench_insertion(){
    //initialisation Tri_tas
    clock_t debut,fin;
    double temps, moy;
    for(int k=2;k<6;k++){
        moy = 0;
        int size = pow(10,k);
        for(int i = 0 ; i<3;i++){
            int g = 1;
            float *t = getTab(size,g);
            debut = clock();
            Tri_insertion(t,size);
            fin = clock();
            temps = ((double)fin-debut) / CLOCKS_PER_SEC;
            moy+=temps;
            g++;
        }
        printf("\n\nTemps d'execution : %.4f",moy/3);
    }
}
void Bench_selection(){
    //initialisation Tri_tas
    clock_t debut,fin;
    double temps, moy;
    for(int k=2;k<6;k++){
        moy = 0;
        int size = pow(10,k);
        for(int i = 0 ; i<3;i++){
            int g = 1;
            float *t = getTab(size,g);
            debut = clock();
            Tri_selection(t,size);
            fin = clock();
            temps = ((double)fin-debut) / CLOCKS_PER_SEC;
            moy+=temps;
            g++;
        }
        printf("\n\nTemps d'execution : %.4f",moy/3);
    }
}