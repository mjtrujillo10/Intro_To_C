// Manuel Jose Trujillo-Silva
// Practice: Stolen Orange Juice
#include <stdio.h>
int main()
{
	// Declaring my variables
	double ORIGINAL_WEIGHT, ORIGINAL_COST, PRE_WEIGHT, POST_WEIGHT;
	double DOLLARS_PER_OZ, STOLEN_DOLLARS;

	// Asking for input
	printf("What is the weight (in oz.) of the original container of OJ?");
	scanf("%lf", &ORIGINAL_WEIGHT);
	printf("What is the cost of the original container of OJ in dollars?");
	scanf("%lf", &ORIGINAL_COST);
	printf("What was the weight (in oz.) of the container before class?");
	scanf("%lf", &PRE_WEIGHT);
	printf("What was the weight (in oz.) of the container before class?");
	scanf("%lf", &POST_WEIGHT);

	// Manipulating variables
	DOLLARS_PER_OZ = (ORIGINAL_COST)/(ORIGINAL_WEIGHT);
	STOLEN_DOLLARS = ((PRE_WEIGHT)-(POST_WEIGHT))*(DOLLARS_PER_OZ);

	// Output
	printf("Your roommate owes you $%.02lf.", STOLEN_DOLLARS);

	}




