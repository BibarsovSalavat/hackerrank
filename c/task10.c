#include <stdio.h>

#define DEFAULT_MESSAGE "Greater than 9"

// Conditional Statements in C
// https://www.hackerrank.com/challenges/conditional-statements-in-c/problem

/*
 * Given a positive integer denoting n, do the following:
 * If 1 <= n <= 9, print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
 * If n > 9, print Greater than 9.
*/

char *numbers[] = {
        "one", "two","three",
        "four", "five", "six",
        "seven", "eight", "nine"
};


int main()
{
    int num;

    scanf("%d", &num);

    printf("%s", num <= 9? numbers[num-1]: DEFAULT_MESSAGE);

    return 0;
}