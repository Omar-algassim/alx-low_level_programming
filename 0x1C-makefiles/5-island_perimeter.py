#!/usr/bin/python3
""" define the island perimeter"""


def island_perimeter(grid):
    """ calculate the perimeter of island in grid"""

    perimeter = 0
    horizontal = -1
    vertical = -1
    if len(grid[0]) >= 100 or 1 in grid[0]:
        return False
    for row in grid:
        vertical = -1
        horizontal += 1
        for item in row:
            vertical += 1
            if item == 1:
                cell = 1
                perimeter += 4
                if grid[horizontal - 1][vertical] == 1:
                            perimeter -= 1
                if grid[horizontal + 1][vertical] == 1:
                        perimeter -= 1
                if grid[horizontal][vertical - 1] == 1:
                            perimeter -= 1
                if grid[horizontal][vertical + 1] == 1:
                            perimeter -= 1
    return perimeter
