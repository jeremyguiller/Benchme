#include <stdio.h>
#include "Fonctions.h"


int main() {

    int a[4][4];

    char selection[100] = {"Tri_selection"};
    char insersion[100] = {"Tri_insersion"};
    char bulle[100] = {"Tri_bulle"};
    char tas[100] = {"Tri_tas"};


    Bench_selection(selection, a, 2);
    Bench_insertion(insersion, a, 2);
    Bench_bulle(bulle, a, 2);
    Bench_Tas(tas, a, 2);


    return 0;

}