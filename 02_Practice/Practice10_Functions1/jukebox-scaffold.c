#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const char* const SONGS[] = {"See You Again", "Want To Want Me", "Walk The Moon", "Talking Body", "Bad Blood"};
const int TOTAL = 5;

int nextSong(int n, int last);

int main() {

    srand(time(0));

    int i, numSongs, prev = 0;
    printf("How many selections do you want from the jukebox?\n");
    scanf("%d", &numSongs);

    for (i=1; i<=numSongs; i++) {
        int curSong = nextSong(TOTAL, prev);
        printf("%d. Now playing: %s\n", i, SONGS[curSong]);
        prev = curSong;
    }

    return 0;
}

// Pre-condition: n > 1, 0 <= last < n
// Post-condition: Returns a random integer in between 0 and
//                 n-1, not equal to last.
int nextSong(int n, int last) {

    // Replace this with your code.
    return n-1;
}
