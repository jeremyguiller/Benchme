#include <stdio.h>
#include <string.h>
#include <time.h>
#include "Tri_selection.h"
#include "Tri_bulle.h"

int main() {
    float tab[5]={ 5.2,2.2,4.4,4.3,3 };
    int i, size=5;
    //Tri_selection(tab);
    Tri_bulle(tab);


    printf("\n");
    for (i=0;i<size;i++){
        printf("%.1f ",tab[i]);
    }


    printf("\n");
    return 0;
}
