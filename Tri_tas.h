//
// Created by j.guillerminprina on 06/10/2021.
//

#ifndef OBJETTP2_TRI_TAS_H
#define OBJETTP2_TRI_TAS_H
/**
* La fonction Tri_cas permet de trier un tableau de taille evolutive à l'aide de
* de l'algorithme de tri par tas
* @author  Jeremy GUILLERMIN PRINA CERAI
* @version 1.0
* @since  008/10/2021
*/
//fonction Sur_le_tas permet de construire le tas
//On l'apelle dans la boucle
void Sur_le_tas(float t[], int n, int i) {
    int max = i;
    int gauche = 2 * i + 1;
    int droite = 2 * i + 2;

    if (gauche < n && t[gauche] > t[max])
        max = gauche;

    if (droite < n && t[droite] > t[max])
        max = droite;


    if (max != i) {
        //on inverse les valeurs du tableau
        float a = t[i];
        float b = t[max];
        t[max]=a;
        t[i]=b;
        Sur_le_tas(t, n, max);
    }
}


void Tri_tas(float t[], int taille) {
    for (int i = taille / 2 - 1; i >= 0; i--)
        Sur_le_tas(t, taille, i);

    for (int i = taille - 1; i >= 0; i--) {
        float a = t[0];
        float b = t[i];
        t[i] = a;
        t[0] = b;
        Sur_le_tas(t, i, 0);
    }
}

#endif //OBJETTP2_TRI_TAS_H