#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printBatteryStatus(int perc, char c);

int main() {

    // Get the percentage of battery.
    int perc;
    printf("What is the percentage battery you want to display?\n");
    scanf("%d", &perc);

    // Fix user input.
    if (perc < 0)
        perc = 0;
    if (perc > 100)
        perc = 100;

    // Call the function.
    printBatteryStatus(perc, '*');
    return 0;
}

// Pre-condition: 0 <= perc <= 100, c is a printable character
// Post-condition: Prints a bar corresponding to perc using the
//                 character c with width 7 and percentage labels
void printBatteryStatus(int perc, char c) {

}

