//
// Created by j.guillerminprina on 06/10/2021.
//

#ifndef OBJETTP2_TRI_INSERTION_H
#define OBJETTP2_TRI_INSERTION_H


#include <string.h>

void Tri_insertion(float t[],int taille) {
    int i, j;
    float tmp;

    for (i = 1; i < taille; i++) {
        tmp = t[i];
        for (j = i; j > 0 && t[j-1] > tmp; j--) {
            t[j] = t[j - 1];
        }
        t[j] = tmp;
    }
}
#endif //OBJETTP2_TRI_INSERTION_H
