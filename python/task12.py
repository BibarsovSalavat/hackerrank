#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - #
# Module of tasks Hackerrank
# Copyright (C) 2021
# Salavat Bibarsov <Bibarsov.Salavat@gmail.com>
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# https://www.hackerrank.com/challenges/capitalize/problem

"""
Task
You are asked to ensure that the first and last names of people begin with 
a capital letter in their passports. For example, alison heck should be 
capitalised correctly as Alison Heck.
"""


# Complete the solve function below.
def solve(s: str):
    
    words = s.split(' ')
    modified = []

    for word in words:
        
        if not word.isspace():

            if not word.isupper(): modified.append(word.capitalize())
            else: modified.append(word)
    else:
        return ' '.join(modified)

if __name__ == '__main__':

    s = input()

    result = solve(s)
    print(result)