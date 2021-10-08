//
// Created by j.guillerminprina on 06/10/2021.
//

#ifndef OBJETTP2_TRI_TAS_H
#define OBJETTP2_TRI_TAS_H
void Sur_le_tas(float t[], int n, int i) {
    int max = i;
    int gauche = 2 * i + 1;
    int droite = 2 * i + 2;

    if (gauche < n && t[gauche] > t[max])
        max = gauche;

    if (droite < n && t[droite] > t[max])
        max = droite;


    if (max != i) {
        float a = t[i];
        float b = t[max];
        t[max]=a;
        t[i]=b;
        Sur_le_tas(t, n, max);
    }
}


void Tri_tas(float t[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        Sur_le_tas(t, n, i);

    for (int i = n - 1; i >= 0; i--) {
        float a = t[0];
        float b = t[i];
        t[i] = a;
        t[0] = b;
        Sur_le_tas(t, i, 0);
    }
}

#endif //OBJETTP2_TRI_TAS_H