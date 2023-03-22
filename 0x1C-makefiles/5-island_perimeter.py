#!/usr/bin/python3
""" module for island_perimeter(grid) function """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    len_row = len(grid)
    len_col = len(grid[0])
    per = 0
    con = 0
    for row in range(0, len_row):
        for col in range(0, len_col):
            if grid[row][col] == 1:
                per += 4
                if row != 0 and grid[row - 1][col] == 1:
                    con += 1
                if col != 0 and grid[row][col - 1] == 1:
                    con += 1
    return per - (con * 2)
