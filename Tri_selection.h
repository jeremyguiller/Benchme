#ifndef OBJETTP2_TRI_SELECTION_H
#define OBJETTP2_TRI_SELECTION_H

void Tri_selection(float tab[]){

    float tmp;
    int size = 5, i=0, j=0;

    for(i=0;i<size-1;i++){ //Boucle parcours le tableau
        for(j=i+1;j<size;j++) { //Boucle parcours le tableau non trié
            if (tab[i] > tab[j]) { //Swap
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }

    /*
    printf("\n");
    for (i=0;i<size;i++){
        printf("%.1f ",tab[i]);
    }
     */


}
#endif //OBJETTP2_TRI_SELECTION_H