#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Calculate the Nth term
// https://www.hackerrank.com/challenges/recursion-in-c/problem

/*
 * There is a series, S, where the next term is the sum of pervious three terms. Given the first three
 * terms of the series, A, B, and C respectively, you have to output the nth term of the series using recursion.
 * Recursive method for calculating n^th term is given below.
 * 1 <= n <= 20;
 * 1 <= a,b,c <= 100;
*/

int find_nth_term(int n, int a, int b, int c);

int main() {

    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}

int find_nth_term(int n, int a, int b, int c) {

    // all tests was be ok and for this variant:
    // return (n > 4) ? find_nth_term(--n,  b, c, a+b+c): a+b+c;

    return (n > 4) ? find_nth_term(--n,  b, c, a+b+c): n < 2? a: n < 4? c: a+b+c;

}