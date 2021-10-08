#include <stdio.h>
#include <malloc.h>
#include "Tri_insertion.h"
#include "Tri_bulle.h"
#include "tri_tas.h"

int main() {
    int i;
    float tab[5]={ 5.2,2.5,4.4,6.6,3.2 };
    const int TAILLE = 5;
    for (i=0;i<5;i++){
        printf("%.2f ",tab[i]);
    }
    printf("\n");
    Tri_tas(tab,TAILLE);
    for (i=0;i<5;i++){
        printf("%.2f ",tab[i]);
    }



}
