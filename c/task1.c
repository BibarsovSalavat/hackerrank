#include <stdio.h>

// Sum and Difference of Two Numbers
// https://www.hackerrank.com/challenges/sum-numbers-c/problem

/*
 * Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
 * Declare 4 variables: two of type int and two of type float.
 * Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize
 * your 4 variables.
 * Use the  and  operator to perform the following operations:
 * Print the sum and difference of two int variable on a new line.
 * Print the sum and difference of two float variable rounded to one decimal place on a new line.
 */

int main() {

    int a, b;
    float x, y;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);

    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f\n", x+y, x-y);

    return 0;
}
