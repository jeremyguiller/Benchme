#include <stdio.h>
#include "Tri_insertion.h"
#include "Tri_bulle.h"

int main() {
    int i;
    int test[5]={ 5,2,4,6,3 };
    int tab[5]={ 5,2,4,6,3 };
    for (i=0;i<5;i++){
        printf("%d ",tab[i]);
    }
    printf("\n");
    Tri_insertion(test);
    for (i=0;i<5;i++){
        printf("%d ",tab[i]);
    }



}
