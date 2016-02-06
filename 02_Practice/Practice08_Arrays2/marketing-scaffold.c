// Arup Guha
// 8/17/2015
// Scaffold to fill in for COP 3223 Common Lab - Marketing (2D arrays)

#include <stdio.h>

#define ROWS 20
#define COLS 5

int main() {

    // Open the input file and read in the number of cases to process.
    FILE* ifp = fopen("marketing.txt", "r");
    int loop, numCases;
    fscanf(ifp, "%d", &numCases);

    // Go through each input case.
    for (loop=0; loop<numCases; loop++) {

        // Get this input grid.
        int grid[ROWS][COLS], i, j;
        for (i=0; i<ROWS; i++)
            for (j=0; j<COLS; j++)
                fscanf(ifp, "%d", &grid[i][j]);

        // Will store best value for row or column.
        int best = 0;

        /*** FILL IN CODE HERE, TO UPDATE BEST, AS NEEDED. ***/

        // Output result.
        printf("%d\n", best);
    }

    fclose(ifp);
    return 0;
}
