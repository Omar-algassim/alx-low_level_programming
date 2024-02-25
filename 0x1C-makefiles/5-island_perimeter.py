#!/usr/bin/python3
""" define the island perimeter"""


def island_perimeter(grid):
    """ calculate the perimeter of island in grid"""

    perimeter = 0
    # horizontal = -1
    vertical = -1
    horizontal = len(grid[0])
    vertical = len(grid)
    for i in range(vertical):
        for j in range(horizontal):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i][j - 1] == 1:
                            perimeter -= 2
                if j > 0 and grid[i - 1][j] == 1:
                            perimeter -= 2
    return perimeter
