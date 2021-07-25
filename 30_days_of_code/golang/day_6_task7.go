package main

// Day 6: Let's Review
// https://www.hackerrank.com/challenges/30-review-loop/problem

/*
 * Objective
 * Today we will expand our knowledge of strings, combining it with what we have
 * already learned about loops. Check out the Tutorial tab for learning materials
 * and an instructional video.

 * Task
 * Given a string, S, of length N that is indexed from 0 to N - 1, print its
 * even-indexed and odd-indexed characters as 2 space-separated strings on a single
 * line (see the Sample below for more detail).

 * Note: 0 is considered to be an even index.

 *
 * Example
 * S = adbecf
 * Print abc def

 * Input Format
 * The first line contains an integer, T (the number of test cases).
 * Each line i of the T subsequent lines contain a string, S.

 * Constraints
 * 1 <= T <= 10;
 * 2 <= length of S <= 10000

 * Output Format
 * For each String S (where 0 <= j <= T - 1), print S[j] even-indexed characters,
 * followed by a space, followed by S[j] odd-indexed characters.

 * Sample Input
 * >>> 2
 * >>> Hacker
 * >>> Rank

 * Sample Output
 * <<< Hce akr
 * <<< Rn ak
 */

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	scanner := bufio.NewReader(os.Stdin)
	var T int
	fmt.Scan(&T)

	for j := 0; j < T; j++ {
		var input string

		input, _ = scanner.ReadString('\n')

		for i := 0; i < len(input); i += 2 {
			if input[i] != '\n' {
				fmt.Printf("%c", input[i])
			}
		}
		fmt.Printf(" ")
		for i := 1; i < len(input); i += 2 {
			if input[i] != '\n' {
				fmt.Printf("%c", input[i])
			}
		}
		fmt.Printf("\n")
	}
}