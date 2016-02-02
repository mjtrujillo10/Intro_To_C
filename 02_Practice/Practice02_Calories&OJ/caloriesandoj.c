// Manuel J. Trujillo-Silva
// Practice: Calorie Counter
#include <stdio.h>
#define CALS_PER_GR_PROTEIN 4
#define CALS_PER_GR_CARB 4
#define CALS_PER_GR_FAT 9
int main()
{
	// Declaring my variables
	double GR_PROTEIN, GR_CARB, GR_FAT;
	double CAL_PROTEIN, CAL_CARB, CAL_FAT, CAL_TOTAL;

	// Requesting Input
	printf("How many grams of protein did you eat?");
	scanf("%lf, %lf, %lf", &GR_PROTEIN, &GR_CARB, &GR_FAT);


	// Manipulation of variables
	CAL_PROTEIN = (GR_PROTEIN)*(CALS_PER_GR_PROTEIN);
	CAL_CARB = (GR_CARB)*(CALS_PER_GR_CARB);
	CAL_FAT = (GR_FAT)*(CALS_PER_GR_FAT);
	CAL_TOTAL = CAL_PROTEIN + CAL_CARB + CAL_FAT;

	// Output
	printf("You've consumed a total of %lf calories today.", CAL_TOTAL);


}
