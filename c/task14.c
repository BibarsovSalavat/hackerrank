#include <stdio.h>
#include <stdlib.h>

// Array Reversal
// https://www.hackerrank.com/challenges/reverse-array-c/problem

/*
 * Given an array, of size n, reverse it.
 * Example: If array, arr = [1, 2, 3, 4, 5], after reversing it, the array should be, arr = [5, 4, 3, 2, 1] .
 *
*/

int main()
{
    int num, *arr;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int tmp = 0;

    for (int i = 0; i < num / 2; i++){
            tmp = arr[i];
            arr[i] = arr[num-1-i];
            arr[num-1-i] = tmp;
    }

    for(int i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    return 0;
}