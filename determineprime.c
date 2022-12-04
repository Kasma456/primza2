//
// Created by Uli Klötzer on 02.12.22.
//

#include "determineprime.h"
#include "stdio.h"
#include "stdlib.h"


int *findprime(int input, int *allnumbers_array, int *counter) {

    int  m = 2, h = 1, *prime_array;

    prime_array = (int *) malloc(100 * sizeof(int));

    if (prime_array != NULL) {

        printf("\nSpeicher wurde erfolgreich für prime_array reserviert.");

    } else {
        printf("\nKein Speicher reserviert.");
    }



    for (int i = 1; i <= input; ++i) {

        allnumbers_array[i] = i; // Array mit füllen

    }

    while (m < (input/2)) {

        for (int i = 2 * m; i < input; i = i + m) {
            allnumbers_array[i] = 0;
        }

        m++;
        while (allnumbers_array[m] == 0) {
            m++;
        }

    }



        for (int i = 1; i < input ; i++) {
            if(allnumbers_array[i] != 0){
                if(h >= 100){
                    prime_array = (int *)realloc(prime_array, (h+1) *sizeof(int)); // Bei Bedarf wird der Speicherplatz des Arrays erweitert
                    if(prime_array != NULL){
                        //printf("\nSpeicher wurde erweitert"); //Bestätigung, dass Speicher erfolgreich erweitert wurde
                    } else{
                        printf("WARNUNG: Es konnte kein Speicher erweitert werden!"); //Fehlermeldung, dass Speicher nicht erweitert wurde
                    }
                }
                prime_array[h] = allnumbers_array[i];
                //printf("\nprime_array(determineprime)[%d] = %d", h,prime_array[h]); // Werden die Zahlen richtig in prime array geschrieben? -> JA!

                h++;

            }

        }


        *counter = h;


    return(prime_array);
}