#include <stdio.h>

// For Loop in C
// https://www.hackerrank.com/challenges/for-loop-in-c/problem

/*
 * For each integer n in the interval [a, b] (given as input) :
 * If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
 * Else if n > 9 and it is an even number, then print "even".
 * Else if n > 9 and it is an odd number, then print "odd".
 */

int main()
{
    int a, b;
    char *numbers[] = {
            "one", "two","three",
            "four", "five", "six",
            "seven", "eight", "nine"
    };
    int size = sizeof numbers / sizeof numbers[0];

    scanf("%d\n%d", &a, &b);
    // Complete the code.

    for (int i = a; i <= b; i++){
        if (i <= size)
            printf("%s\n", numbers[i-1]);
        else
            printf("%s\n",i % 2 == 0? "even": "odd");
    }

    return 0;
}