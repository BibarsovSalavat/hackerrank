#include <stdio.h>

// Printing Pattern Using Loops
// https://www.hackerrank.com/challenges/printing-pattern-2/problem

/*
 * Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.
 * 5 5 5 5 5 5 5 5 5
 * 5 4 4 4 4 4 4 4 5
 * 5 4 3 3 3 3 3 4 5
 * 5 4 3 2 2 2 3 4 5
 * 5 4 3 2 1 2 3 4 5
 * 5 4 3 2 2 2 3 4 5
 * 5 4 3 3 3 3 3 4 5
 * 5 4 4 4 4 4 4 4 5
 * 5 5 5 5 5 5 5 5 5
*/

int main(){

    unsigned short size;
    scanf("%d", &size);

    // Define const of length
    unsigned short const length = size * 2 - 1;

    for (int i = 0, j = -1; i < length; i++, j = -1){

        while (++j < length){

            int var = i < j ? i : j;
            var = var < length - i ? var : length - i - 1;
            var = var < length - j - 1 ? var : length - j - 1;

            printf("%d ", size - var);
        }

        printf("\n");
    }

    return 0;
}