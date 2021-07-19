#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - #
# Module of tasks Hackerrank
# Copyright (C) 2021
# Salavat Bibarsov <Bibarsov.Salavat@gmail.com>
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# https://www.hackerrank.com/challenges/python-arithmetic-operators/problem

"""
Task
The provided code stub reads two integers from STDIN, A and B. Add code to print 
three lines where:
    1. The first line contains the sum of the two numbers.
    2. The second line contains the difference of the two numbers (first - second).
    3. The third line contains the product of the two numbers.
"""


if __name__ == '__main__':

    a = int(input())
    b = int(input())

    print(a+b)
    print(a-b)
    print(a*b)