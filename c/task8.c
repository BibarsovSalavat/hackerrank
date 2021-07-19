#include <stdio.h>

// Playing With Characters
// https://www.hackerrank.com/challenges/playing-with-characters/problem

/*
 * You have to print the character, CH, in the first line. Then print S in next line. In the last line print
 * the sentence, SEN.
*/

int main()
{
    char ch, s[100], sen[100];

    scanf("%c\n%s\n%[^\n]%*c", &ch, s, sen);

    printf("%c\n%s\n%s", ch, s, sen);

    return 0;
}