//
// Created by j.guillerminprina on 06/10/2021.
//

#ifndef OBJETTP2_TRI_INSERTION_H
#define OBJETTP2_TRI_INSERTION_H

/**
* La fonction Tri_insertion permet de trier un tableau de nombres floats de taille variables
* à l'aide de l'algorithme de tri par insertion
* @author  Jeremy GUILLERMIN PRINA CERAI
* @version 1.0
* @since  008/10/2021
*/
void Tri_insertion(float t[],int taille) {
    //initialisation des variables
    int i, j;
    //tmp permet d'ajouter une valeur au tableau
    float tmp;

    for (i = 1; i < taille; i++) {//boucle qui parcours le tableau
        tmp = t[i];
        //On compare la valeur dans n+1 par rapport à n
        for (j = i; j > 0 && t[j-1] > tmp; j--) {
            t[j] = t[j - 1];
        }
        t[j] = tmp;
    }
}
#endif //OBJETTP2_TRI_INSERTION_H
