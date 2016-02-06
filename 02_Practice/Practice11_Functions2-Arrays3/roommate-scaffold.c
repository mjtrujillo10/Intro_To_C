// Scaffold for COP 3223 Recitation Problem: Too Many Friends!

#include <stdio.h>

#define MAX 100

int tooManyFriends(int data[], int length, int friendLimit, int numDays);

int main() {

    int i, loop, n;

    // Read in the schedule data.
    FILE* ifp = fopen("schedule.in", "r");
    fscanf(ifp, "%d", &n);

    // Process each case
    for (loop=1; loop<=n; loop++) {

        // Read in all the data for the case.
        int totaldays, maxfriends, period, data[MAX];
        fscanf(ifp, "%d%d%d", &totaldays, &maxfriends, &period);
        for (i=0; i<days; i++)
            fscanf(ifp, "%d", &data[i]);

        // Output accordingly.
        if (tooManyFriends(data, days, maxfriends, period))
            printf("Case %d: RULE BROKEN!!!\n");
        else
            printf("Case %d: You followed the agreement.\n");
    }

    fclose(ifp);
    return 0;
}

// Pre-condition: data has length elements. friendLimit, numDays are both
//                positive and numDays <= length;
// Post-condition: Returns 1 if there is some consecutive streak of numDays
//                 integers that adds up to more than friendLimit. Returns 0
//                 otherwise.
int tooManyFriends(int data[], int length, int friendLimit, int numDays) {

    // Fill this in.
    return 0;
}
