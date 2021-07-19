#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - #
# Module of tasks Hackerrank
# Copyright (C) 2021
# Salavat Bibarsov <Bibarsov.Salavat@gmail.com>
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# https://www.hackerrank.com/challenges/python-string-split-and-join/problem

"""
Task
You are given a string. Split the string on a " " (space) delimiter and join 
using a - hyphen.
Complete the split_and_join function in the editor below.

split_and_join has the following parameters:

string line: a string of space-separated words
"""


def split_and_join(line: str):
    
    splitted = line.split(' ')

    return '-'.join(splitted)

if __name__ == '__main__':

    line = input()
    result = split_and_join(line)

    print(result)