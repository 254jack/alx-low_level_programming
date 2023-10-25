#!/usr/bin/python3
''' Island_perimeter Module that contains the island_perimeter function '''


def island_perimeter(grid):
    ''' Function that returns the perimeter of the island '''
    perimeter = 0

    n_rows = len(grid)

    if grid != []:
        ncolumns = len(grid[0])

    for a in range(n_rows):
        for b in range(ncolumns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == n_rows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == ncolumns or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter
