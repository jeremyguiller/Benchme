#include <stdio.h>
#include "Fonctions.h"

int main(int argc, char **argv) {
    int a[4][4];

    //Creation de 3 noms de fichiers
    char *fichier = argv[2];
    char *b = argv[1];
    int c = b[0]-48;
    //Appelle des fonctions
    switch (c) {
        case 1:
            Bench_selection(fichier, a, 2);
            break;
        case 2:
            Bench_insertion(fichier, a, 2);
            break;
        case 3:
            Bench_bulle(fichier, a, 2);
            break;
        case 4:
            Bench_Tas(fichier, a, 2);
            break;
    }
}