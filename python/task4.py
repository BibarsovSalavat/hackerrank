#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - #
# Module of tasks Hackerrank
# Copyright (C) 2021
# Salavat Bibarsov <Bibarsov.Salavat@gmail.com>
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# https://www.hackerrank.com/challenges/python-loops/problem

"""
Task
The provided code stub reads and integer, n, from STDIN. 
For all non-negative integers i < n , print i^2.
"""


if __name__ == '__main__':

    n = int(input())

    for i in range(n):
        print(i**2)