//
// Created by Uli Klötzer on 02.12.22.
//

#include "determineprime.h"
#include "stdio.h"
#include "stdlib.h"


int findprime(int input, int *allnumbers_array, int *prime_array) {

    int  m = 2, n = 0, counter = 0, h = 1;

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

  /*  for (int i = 0; i <= input ; ++i) {

        printf("\nallnumbers_array[%d] = %d", i,allnumbers_array[i]); // Werden die Zahlen richtig in allnumbers array geschrieben? -> JA!

    } */

        for (int i = 1; i < input ; i++) {
            if(allnumbers_array[i] != 0){
                if(h >= 100){
                    prime_array = (int *)realloc(prime_array, h+1); // Bei Bedarf wird der Speicherplatz des Arrays erweitert
                    if(prime_array != NULL){
                        printf("\nSpeicher wurde erweitert"); //Bestätigung, dass Speicher erfolgreich erweitert wurde
                    } else{
                        printf("WARNUNG: Es konnte kein Speicher erweitert werden!"); //Fehlermeldung, dass Speicher nicht erweitert wurde
                    }
                }
                prime_array[h] = allnumbers_array[i];
                //printf("\nprime_array(determineprime)[%d] = %d", h,prime_array[h]); // Werden die Zahlen richtig in prime array geschrieben? -> JA!
                //n++;
                h++;

            }

        }


        counter = h;


    return(counter);
}