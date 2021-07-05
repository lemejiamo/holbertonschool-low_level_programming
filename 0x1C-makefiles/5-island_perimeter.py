#!/usr/bin/python3
"""  programm to calcute the perimeter of island """


def island_perimeter(grid):
    """
        calculate the perimeter based in a grid

        Attributes:
        Grid: is rectangular, width and height don’t exceed 100
    """

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                potential_perimeter = 4

                if (j + 1) < len(grid[i]):
                    if grid[i][j+1] == 1:
                        potential_perimeter -= 1

                if (j - 1) >= 0:
                    if grid[i][j-1] == 1:
                        potential_perimeter -= 1

                if (i - 1) >= 0:
                    if grid[i-1][j] == 1:
                        potential_perimeter -= 1

                if (i + 1) < len(grid):
                    if grid[i+1][j] == 1:
                        potential_perimeter -= 1

                perimeter = perimeter + potential_perimeter
    return (perimeter)
