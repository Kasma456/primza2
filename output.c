//
// Created by Uli Klötzer on 02.12.22.
//

#include "output.h"
#include "stdio.h"

int output(int *prime_array, int counter) {

    for (int i = 2; i < counter; ++i) {

            printf("\nIm prime_array[%d] steht %d",i-1, prime_array[i]);

    }

    return 0;

}

