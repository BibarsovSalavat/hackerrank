#include <stdio.h>
#include <math.h>

// Pointers in C
// https://www.hackerrank.com/challenges/pointer-in-c/problem

/*
 * Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b.
 * Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return
 * statement is needed.
 */

void update(int *a, int *b) {

    int tmp;
    tmp = *a;
    *a = *a + *b;
    *b = fabs(tmp - *b);

}

int main() {

    int a, b;

    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}