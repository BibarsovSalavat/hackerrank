#include <stdio.h>
#include <stdlib.h>

// Students Marks Sum
// https://www.hackerrank.com/challenges/students-marks-sum/problem

/*
 * You are given an array of integers, MARKS , denoting the marks scored by students in a class.
 * The alternating elements MARKS[0], MARKS[2], MARKS[4] and so on denote the marks of boys.
 * Similarly, MARKS[1], MARKS[3], MARKS[5] and so on denote the marks of girls.
 * The array name, , works as a pointer which stores the base address of that array. In other words,
 * contains the address where  is stored in the memory.

 * For example, let  and  stores 0x7fff9575c05f. Then, 0x7fff9575c05f is the memory address of.

 * Function Description
 * Complete the function, marks_summation in the editor below.
 * marks_summation has the following parameters:
 * int marks[number_of_students]: the marks for each student
 * int number_of_students: the size of marks[]
 * char gender: either 'g' or 'b'
 */

int marks_summation(int* marks, int number_of_students, char gender);

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}

int marks_summation(int* marks, int number_of_students, char gender) {

    int counter = 0;

    for(int i = 0; i < number_of_students; i++){

        if (gender == 'g') counter += (i%2 != 0)? marks[i]: 0;
        else if (gender == 'b') counter += (i%2 == 0)? marks[i]: 0;

    }

    return counter;
}