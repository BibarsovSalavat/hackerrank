#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Day 2: Operators
// https://www.hackerrank.com/challenges/30-operators/problem

/*
 * Objective
 * In this challenge, you will work with arithmetic operators. Check out the Tutorial tab for learning materials and an
 * instructional video.

 * Task
 * Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip),
 * and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's
 * total cost. Round the result to the nearest integer.

 * Example
 * mealCost = 100
 * tipPercent = 15
 * taxPercent = 8
 * A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. Print the value 123 and return from the function.

 * Function Description
 * Complete the solve function in the editor below.
 * solve has the following parameters:
 * - int meal_cost: the cost of food before tip and tax
 * - int tip_percent: the tip percentage
 * - int tax_percent: the tax percentage
 * Returns The function returns nothing. Print the calculated value, rounded to the nearest integer.
 * Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result.

 * Input Format
 * There are 3 lines of numeric input:
 * The first line has a double,  (the cost of the meal before tax and tip).
 * The second line has an integer, tipPercent (the percentage of mealCost being added as tip).
 * The third line has an integer, taxPercent (the percentage of mealCost being added as tax).

 * Sample Input
 * >>> 12.00
 * >>> 20
 * >>> 8

 * Sample Output
 * <<< 15

 * We round total_cost to the nearest integer and print the result, 15.
*/

char* readline();
char* ltrim(char*);
char* rtrim(char*);

double parse_double(char*);
int parse_int(char*);

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent) {

    double tax = (meal_cost / 100.0) * tax_percent;
    double tip = (meal_cost / 100.0) * tip_percent;

    int total_cost = (int)round(meal_cost + tax + tip);

    printf("%d", total_cost);
}

int main()
{
    double meal_cost = parse_double(ltrim(rtrim(readline())));

    int tip_percent = parse_int(ltrim(rtrim(readline())));

    int tax_percent = parse_int(ltrim(rtrim(readline())));

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

double parse_double(char* str) {
    char* endptr;
    double value = strtod(str, &endptr);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
