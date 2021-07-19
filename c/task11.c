#include <stdio.h>

// Bitwise Operators
// https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

/*
 * Complete the calculate_the_maximum function in the editor below.
 * calculate_the_maximum has the following parameters:
 * int n: the highest number to consider
 * int k: the result of a comparison must be lower than this number to be considered
*/

void calculate_the_maximum(int n, int k) {

    int and = 0, or = 0, xor = 0;

    for (int i = 1; i <= n; i++){

        for (int j = i+1; j <= n; j++){

            (k > (i & j)) && ((i & j) > and) ? and = (i & j) : 0;
            (k > (i | j)) && ((i | j) > or) ? or = (i | j) : 0;
            (k > (i ^ j)) && ((i ^ j)> xor) ? xor = (i ^ j) : 0;

        }

    }

    printf("%d\n%d\n%d\n", and, or, xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
