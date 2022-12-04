//
// Created by Uli Klötzer on 01.12.22.
//

#include "input.h"
#include "output.h"
#include "determineprime.h"
#include <stdio.h>
#include <stdlib.h>

#define HUNDERT 100




int main(void){

    int input = 0, *allnumbers_array, *prime_array, end = 0, count_of_prime = 0;

while(end != 1) {
    if (inputcheck(&input) != 1) {

        allnumbers_array = (int *) malloc(input * sizeof(int));
        //prime_array = (int *) malloc(HUNDERT * sizeof(int));

        if (allnumbers_array != NULL) {

            printf("\nSpeicher wurde erfolgreich für allnumbers_array reserviert.");

        } else {
            printf("\nKein Speicher reserviert.");
        }
        if (prime_array != NULL) {

            printf("\nSpeicher wurde erfolgreich für prime_array reserviert.");

        } else {
            printf("\nKein Speicher reserviert.");
        }

        prime_array = findprime(input, allnumbers_array, &count_of_prime);

        output(prime_array,count_of_prime);

        free(allnumbers_array);
        free(prime_array);

    } else {
        printf("\nProgramm wurde abgebrochen!\n");
        end = 1;
    }


}

    return 0;
}