#!/usr/bin/python3
"""
island_perimeter
"""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    length = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                length = length + 1
                if grid[i-1][j] == 1 and grid[i][j+1] == 1 or [i][j - 1] == 1:
                    length = length + 1
    length = length * 2
    return length
