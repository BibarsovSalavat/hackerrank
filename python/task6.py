#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - #
# Module of tasks Hackerrank
# Copyright (C) 2021
# Salavat Bibarsov <Bibarsov.Salavat@gmail.com>
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# https://www.hackerrank.com/challenges/python-print/problem

""" 
Task
In this task, we would like for you to appreciate the usefulness of 
the groupby() function of itertools . To read more about this function, 
Check this out.

You are given a string S. Suppose a character 'c' occurs consecutively 
X times in the string. Replace these consecutive occurrences of 
the character 'c' with (X, c) in the string.

For a better understanding of the problem, check the explanation.
"""


from itertools import groupby
import itertools


if __name__ == '__main__':

    string = str(input())

    for item in groupby(string):
        print(item[0], item[1])