#!/bin/python3

# Day 5: Loops
# https://www.hackerrank.com/challenges/30-loops/problem

"""
  Objective
  In this challenge, we will use loops to do some math. Check out the Tutorial tab to learn more.

  Task
  Given an integer, n, print its first 10 multiples. Each multiple n*i (where 1 <= i <= 10) should
  be printed on a new line in the form: n x i = result.

  Example
  n = 3

  The printout should look like this:
  <<< 3 x 1 = 3
  <<< 3 x 2 = 6
  <<< 3 x 3 = 9
  <<< 3 x 4 = 12
  <<< 3 x 5 = 15
  <<< 3 x 6 = 18
  <<< 3 x 7 = 21
  <<< 3 x 8 = 24
  <<< 3 x 9 = 27
  <<< 3 x 10 = 30

  Input Format
  A single integer, n.

  Constraints
  2 <= n <= 20;

  Output Format
  Print 10 lines of output; each line i (where 1 <= i <= 10) contains the result of n * i in the form:
  n x i = result.
"""


if __name__ == '__main__':
    n = int(input().strip())

    # You code here
    
    for i in range(1, 11):
        print(f"{n} x {i} =", n*i)
