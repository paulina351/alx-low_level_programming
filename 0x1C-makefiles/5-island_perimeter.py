#!/usr/bin/python3
"""Task for island_perimeter"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""

    perimeter = 0
    for row in range(len(grid)):
        if column in range(len(grid[row])):
            if grid[row][column] == 1:
                perimeter += 4
                if row > 0 and grid[row-1][column] == 1:
                    perimeter -= 1
                if column > 0 and grid[row][column-1] == 1:
                    perimeter -= 1
                if column < (len(grid[row])-1) and grid[row][column+1] == 1:
                    perimeter -= 1
                if row < (len(grid)-1) and grid[row+1][column] == 1:
                    perimeter -= 1
    return (perimeter)
