package main

// Day 3: Intro to Conditional Statements
// https://www.hackerrank.com/challenges/30-conditional-statements/problem

/*
 * Objective
 * In this challenge, we learn about conditional statements. Check out the Tutorial tab for learning materials and an
 * instructional video.

 * Task
 * Given an integer, n, perform the following conditional actions:
 * - If n is odd, print Weird
 * - If n is even and in the inclusive range of 2 to 5, print Not Weird
 * - If n is even and in the inclusive range of 6 to 20, print Weird
 * - If n is even and greater than 20, print Not Weird
 * Complete the stub code provided in your editor to print whether or not n is weird.

 * Input Format
 * A single line containing a positive integer, n.

 * Constraints
 * 1 <= N <= 100;

 * Output Format
 * Print Weird if the number is weird; otherwise, print Not Weird.

 * Sample Input 0
 * >>> 3

 * Sample Output 0
 * <<< Weird

 * Sample Input 1
 * >>> 24

 * Sample Output 1
 * Not Weird

 * Explanation
 * Sample Case 0: n=3
 * n is odd and odd numbers are weird, so we print Weird.
 * Sample Case 1: n=24
 * n > 20 and n is even, so it is not weird. Thus, we print Not Weird.
*/

import (
    "bufio"
    "fmt"
    "io"
    "os"
    "strconv"
    "strings"
)



func main() {
    reader := bufio.NewReaderSize(os.Stdin, 16 * 1024 * 1024)

    NTemp, err := strconv.ParseInt(strings.TrimSpace(readLine(reader)), 10, 64)
    checkError(err)
    N := int32(NTemp)
    odd := ""

    if (N % 2 == 0){
        if(((2 < N) && N < 5) || N > 20){
            odd = "Not "
        }

    }

    fmt.Println(odd + "Weird")
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
