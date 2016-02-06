// Arup Guha
// 9/9/2012
// Edited on 8/17/2015 to be scaffold for COP 3223 Lab Program on Sorting.

#include <stdio.h>

#define SIZE 5
#define MAXVAL 100
#define PRINT 1

void swap(int* ptrA, int*ptrB);
void print(int array[], int length);
void fillRandomArray(int array[], int length, int max);
void gnomeSort(int array[], int length);
int isSorted(int array[], int length);

int main() {

    // Fill, print, and sort.
    srand(time(0));
    int a[SIZE];
    fillRandomArray(a, SIZE, MAXVAL);
    if (PRINT) print(a, SIZE);
    GnomeSort(a, SIZE);
    if (PRINT) print(a, SIZE);

    // Print out the final result.
    if (isSorted(a, SIZE))
        printf("The sort worked properly.\n");
    else
        printf("There was a problem with the sort.\n");

    return 0;
}

// Prints out values in array[0]...array[length-1].
void print(int array[], int length) {
    int i;
    for (i=0; i<length; i++)
        printf("%d ", array[i]);
    printf("\n");
}


// Sorts the items array[0] through array[length-1] using the Gnome Sort algorithm.
void gnomeSort(int array[], int length) {
    /*** FILL IN YOUR CODE HERE ***/
}

// Swaps the variables pointed to by ptrA and ptrB.
void swap(int* ptrA, int* ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

// Fills array[0] through array[length-1] with randomly
// chosen integers in the range [1, max].
void fillRandomArray(int array[], int length, int max) {
    int i;
    for (i=0; i<length; i++)
        array[i] = rand()%max + 1;
}

// Returns 1 iff array[0] through array[length-1] are
// in sorted order from smallest to largest.
int isSorted(int array[], int length) {

    // Return false if a pair of consecutive values is out of order.
    int i;
    for (i=0; i<length-1; i++)
        if (array[i] > array[i+1])
            return 0;

    return 1;
}
