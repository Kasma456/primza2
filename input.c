//
// Created by Uli Klötzer on 02.12.22.
//

#include "input.h"
#include <stdio.h>


int inputcheck(int *input) {

    int check = 0, stop = 0;
while(check != 1){

    printf("\nBis wohin sollen die Primzahlen berechnet werte (Ende = 0) ");
    check = scanf("%d", input);
    fflush(stdin);

    if (check == 1) {

        printf("Eingabe korrekt!");

        if (*input == 0) {
            stop = 1;
        }

    } else if (check != 1) {

        printf("Fehler bei der Eingabe");

    }
}



    return (stop);
}