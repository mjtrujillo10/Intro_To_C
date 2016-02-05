// Manuel J. Trujillo-Silva
// Video Game Time Practice Assignment

#include <stdio.h>
int main()
{
	// Declare variables
	int CUR_HOUR, CUR_MIN, VG_MIN, HW_MIN, DUE_HOUR, DUE_MIN, TIME_LEFT;

	// Ask for input
	printf("What is the current hour and minute, separated by a space?\n");
	scanf("%d %d", &CUR_HOUR, &CUR_MIN);

	printf("How many minutes will the video game take to play?\n");
	scanf("%d", &VG_MIN);

	printf("How many minutes will your homework take?\n");
	scanf("%d", &HW_MIN);

	printf("Please enter the hour and minute the homework is due.\n");
	scanf("%d %d", &DUE_HOUR, &DUE_MIN);




	// Manipulate variables & provide output
	TIME_LEFT = (DUE_HOUR-CUR_HOUR)*60 + (DUE_MIN-CUR_MIN);
	if ( TIME_LEFT >= (VG_MIN + HW_MIN) )
		printf("Great, you can play the game and still finish your homework.\n");
	else
		printf("Sorry, no game for you. Just do your homework.\n");





}
