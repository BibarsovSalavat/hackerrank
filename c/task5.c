#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Sum of Digits of a Five Digit Number
// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem

/*
 * Given a five digit integer, print the sum of its digits.
 */

int main() {

    int n, result;
    scanf("%d", &n);

    result = (n/10000) + ((n%10000) /1000) + ((n%1000) /100) + ((n%100) / 10) + ((n%100) %10);

    printf("%d", result);

    return 0;
}