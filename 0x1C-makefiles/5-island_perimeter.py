#!/usr/bin/python3
""" define the island perimeter"""


def island_perimeter(grid):
    """ calculate the perimeter of island in grid"""

    perimeter = 0
    horizontal = -1
    vertical = -1

    for row in grid:
        horizontal += 1
        for item in row:
            vertical += 1
            if item == 1:
                cell = 1
                perimeter = 3
                while cell != 0:
                    if grid[horizontal - 1][vertical] == 1:
                        perimeter += 2
                        cell = grid[horizontal - 1][vertical]
                        horizontal -= 1
                    elif grid[horizontal + 1][vertical] == 1:
                        perimeter += 2
                        cell = grid[horizontal + 1][vertical]
                        horizontal += 1
                    elif grid[horizontal][vertical - 1] == 1:
                        perimeter += 2
                        cell = grid[horizontal][vertical - 1]
                        vertical -= 1
                    elif grid[horizontal][vertical + 1]:
                        perimeter += 2
                        cell = grid[horizontal][vertical + 1]
                        vertical += 1
                    elif:
                        cell = 0
    return perimeter
