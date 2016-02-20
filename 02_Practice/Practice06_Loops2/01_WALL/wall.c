// MJT
// Wall Painting Practice

#include <stdio.h>
#include <math.h>

void flagprinter(int,int);

void main() {

    // Declare variables
    int num_row, num_first;

    // Ask for input
    printf("Let's get to printing some stars (and rip off 'murica)!\nHow many rows for your star design?\n");
    scanf("%d", &num_row);
    printf("Alright, %d rows. How many stars in the first row?\n", num_row);
    scanf("%d", &num_first);

    // Gonna make a function to print the flag
    flagprinter(num_row, num_first);


}

void flagprinter(int row_count, int col_count) {

    // Declare variables
    int i, j, swap=1;
    int space_count, star_count;

    // Flag loop
    for (i=row_count; i>0; i--) {

        if (swap%2 == 1) {
            for (j=col_count; j>0; j--) {
                printf("* ");
            }
        } else {
            printf(" ");
            for (j=col_count-1; j>0; j--) {
                printf("* ");
            }
        }
        swap = swap + 1;
        printf("\n");

    }

    printf("There's your damn flag. You're welcome.");

}
