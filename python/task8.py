#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - #
# Module of tasks Hackerrank
# Copyright (C) 2021
# Salavat Bibarsov <Bibarsov.Salavat@gmail.com>
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem

"""
Task
Given the participants' score sheet for your University Sports Day, 
you are required to find the runner-up score. You are given n scores. 
Store them in a list and find the score of the runner-up.
"""

if __name__ == '__main__':

    n = int(input())
    arr = map(int, input().split())
    
    result = [int(item) for item in arr]

    a = max(result)
    b = min(result)

    for i in result:

        if i > b and i < a: b = i

    else:
        
        print(b)
