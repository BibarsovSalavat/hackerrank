#include <stdio.h>

// Functions in C
// https://www.hackerrank.com/challenges/functions-in-c/problem

/*
 * Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of
 * them.
 */

int max_of_four(int a, int b, int c, int d){
    int max;

    max = a > b ? a: b;
    max = max > c ? max: c;
    max = max > d ? max: d;

    return max;
}

int main(){

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}