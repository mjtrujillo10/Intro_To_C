// MJT
// Ways to Buy Pizza practice problem

#include <stdio.h>
#include <math.h>

void slicemod(int);

void main () {

    // Declaring my input variable
    int tot_slice;

    // Asking for input
    printf("How many slices of pizza are you getting all together?\n");
    scanf("%d", &tot_slice);

    // Slice modification and output function
    slicemod(tot_slice);
}

void slicemod(int tot_slice) {

    // Declaring my slice variables
    int fr_slice = 1, rm_slice = 2, tot_counter = tot_slice;
    int my_slice = tot_counter - 3;
    int test;
    test = rm_slice < my_slice;
    printf("\nTEST: %d, \n", test);


    // Loop 1 of slice calculator
    while ((fr_slice < rm_slice) == 1) {
        while (rm_slice < my_slice == 1) {
            // Error checks
            if (fr_slice < rm_slice == 1 && rm_slice < my_slice == 1) {
                printf("Friend = %d slices, Roommate = %d slices, and You = %d slices.\n", fr_slice, rm_slice, my_slice);
                rm_slice = rm_slice + 1;
                my_slice = my_slice - 1;
                if (rm_slice > my_slice == 1) {
                    break;
                } else {
                    continue;
                }
            } else if (fr_slice + rm_slice + my_slice > tot_slice == 1) {
                printf("ERROR: Tot slice < added slices\n");
                break;
            } else if (fr_slice + rm_slice + my_slice < tot_slice == 1) {
                printf("ERROR: Tot slice > added slices\n");
                break;
            // Print statement
            } else {
                rm_slice = rm_slice + 1;
                my_slice = my_slice - 1;
                if (rm_slice > my_slice) {
                    break;
                } else {
                    continue;
                }
            }
        }

        // Variable set
        fr_slice = fr_slice + 1;
        rm_slice = fr_slice + 1;
        my_slice = tot_slice - (fr_slice + rm_slice);
        // Test
        if (tot_slice != my_slice + fr_slice + rm_slice) {
            printf("ERROR: Var reset error1.\n Total: %d, F: %d, R:%d, Y:%d.\n", tot_slice, fr_slice, rm_slice, my_slice);
            break;
        } else if ((fr_slice < rm_slice < my_slice) == 0) {
            printf("\nAnd that's all folks!");
            break;
        } else {
            continue;
        }
    }
}
