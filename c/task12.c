#include <stdio.h>
#include <stdlib.h>

// 1D Arrays in C
// https://www.hackerrank.com/challenges/1d-arrays-in-c/problem

/*
 * In this challenge, create an array of size n dynamically, and read the values from stdin.
 * Iterate the array calculating the sum of all elements. Print the sum and free the memory where the array is stored.
 * The first line contains an integer, n.
 * The next line contains n space-separated integers.
*/

int main(){
    unsigned size;
    unsigned sum = 0;

    scanf("%d", &size);

    int *array = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("%d", sum);
    free(array);

    return 0;
}