package main

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

import (
    "bufio"
    "fmt"
    "io"
    "math"
    "os"
    "strconv"
    "strings"
)

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

func solve(meal_cost float64, tip_percent int32, tax_percent int32) {
    // Write your code here

	tax := (meal_cost / 100) * float64(tip_percent)
	tip := (meal_cost / 100) * float64(tax_percent)
	total_cost := math.Round(meal_cost + tax + tip)
	
	fmt.Println(total_cost)

}

func main() {
    reader := bufio.NewReaderSize(os.Stdin, 16 * 1024 * 1024)

    meal_cost, err := strconv.ParseFloat(strings.TrimSpace(readLine(reader)), 64)
    checkError(err)

    tip_percentTemp, err := strconv.ParseInt(strings.TrimSpace(readLine(reader)), 10, 64)
    checkError(err)
    tip_percent := int32(tip_percentTemp)

    tax_percentTemp, err := strconv.ParseInt(strings.TrimSpace(readLine(reader)), 10, 64)
    checkError(err)
    tax_percent := int32(tax_percentTemp)

    solve(meal_cost, tip_percent, tax_percent)
}

func readLine(reader *bufio.Reader) string {
    str, _, err := reader.ReadLine()
    if err == io.EOF {
        return ""
    }

    return strings.TrimRight(string(str), "\r\n")
}

func checkError(err error) {
    if err != nil {
        panic(err)
    }
}

