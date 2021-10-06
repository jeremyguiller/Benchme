#ifndef OBJETTP2_TRI_BULLE_H
#define OBJETTP2_TRI_BULLE_H

void Tri_bulle(float tab[]){
    float tmp;
    int i,j,size=5,changeA=0, changeB=0;
    for(i=0; i<=size; i++) { //Boucle parcours le tableau
        for (j=0; j<size-1; j++) { //Boucle pour comparer les couples
            if (tab[j] > tab[j+1]) { //Changement de valeurs
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
                changeB++;
            }
        }

        if (changeA==changeB){ //Si pas de changement, sortir de la boucle
            break;
        }
        changeB=0;

    }
}

#endif //OBJETTP2_TRI_BULLE_H
