#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - #
# Module of tasks Hackerrank
# Copyright (C) 2021
# Salavat Bibarsov <Bibarsov.Salavat@gmail.com>
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# https://www.hackerrank.com/challenges/swap-case/problem

"""
Task
You are given a string and your task is to swap cases. In other words, 
convert all lowercase letters to uppercase letters and vice versa.
"""


def swap_case(s:str):

    modified = ''

    for letter in s:

        if letter.islower(): 
            modified += letter.title()

        elif letter.istitle():
             modified += letter.lower()

        else: 
            modified += letter
            
    else:
        return modified

if __name__ == '__main__':
    
    s = input()

    result = swap_case(s)
    print(result)
