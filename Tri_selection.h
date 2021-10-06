#ifndef OBJETTP2_TRI_SELECTION_H
#define OBJETTP2_TRI_SELECTION_H

void Tri_selection(){
    int tab[5]={ 5,2,4,6,3 };
    int size = 4,i=0,j=0,tmp;

    for(i=0;i<size;i++){ //Boucle parcours le tableau

        if(tab[i]>tab[i+1]){ //Swap
            tmp = tab[i];
            tab[i+1] = tab[i];
            tab[i] = tmp;
        }
    }


    printf("\n");
    for (i=0;i<size;i++){
        printf("%d ",tab[i]);
    }




}
#endif //OBJETTP2_TRI_SELECTION_H