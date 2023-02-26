#!/usr/bin/python3
""" island_perimeter module """


def island_perimeter(grid):
    """ find the perimeter of the island described in grid
    Args:
        grid: a list of list of integers
    Return:
        return perimeter of the island described in grid
    """
    result = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                result += 4
                if i - 1 >= 0 and grid[i - 1][j] == 1:
                        result -= 1
                if i + 1 < len(grid) and grid[i + 1][j] == 1:
                        result -= 1
                if j + 1 < len(grid[i]) and grid[i][j + 1] == 1:
                        result -= 1
                if j - 1 >= 0 and grid[i][j - 1] == 1:
                        result -= 1
    return (result)
