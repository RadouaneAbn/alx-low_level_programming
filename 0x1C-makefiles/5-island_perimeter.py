#!/usr/bin/python3
"""
    5-island_perimeter
"""


def island_perimeter(grid):
    """This function returns the perimeter of the island described in grid
    """
    perimeter = 0
    y = len(grid)
    x = len(grid[0])

    for i in range(y):
        for j in range(x):
            if grid[i][j] == 0:
                continue

            if j + 1 in range(x) and grid[i][j + 1] == 0:
                perimeter += 1
            if j - 1 in range(x) and grid[i][j - 1] == 0:
                perimeter += 1
            if i + 1 in range(y) and grid[i + 1][j] == 0:
                perimeter += 1
            if i - 1 in range(y) and grid[i - 1][j] == 0:
                perimeter += 1

    return perimeter
