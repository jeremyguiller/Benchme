#ifndef OBJETTP2_TRI_SELECTION_H
#define OBJETTP2_TRI_SELECTION_H
/**
* La fonction Tri_selection permet de trier un tableau de nombres floats de taille variables
* à l'aide de l'algorithme de tri par selection
* @author  MAXIME BENUCCI
* @version 1.0
* @since  008/10/2021
*/
void Tri_selection(float tab[], int size){
    //initialisation
        float tmp;
        int i=0, j=0;

    //Fonction de tri selection
        for(i=0;i<size-1;i++){ //Boucle parcours le tableau
            for(j=i+1;j<size;j++) { //Boucle parcours le tableau non trié
                if (tab[i] > tab[j]) { //Swap
                    tmp = tab[i];
                    tab[i] = tab[j];
                    tab[j] = tmp;
                }
            }
        }

}
#endif //OBJETTP2_TRI_SELECTION_H