// Manuel J. Trujillo-Silva
// BOGO OJ Practice Assignment
#include <stdio.h>

int main()
{
	// Declare variables
	int CONT_NUM, BOGO_NUM;
	double ONE_OJ_COST, TOTAL_COST;


	// Ask for input
	printf("What is the cost of one container of OJ in dollars?");
	scanf("%lf", &ONE_OJ_COST);
	printf("How many containers are you buying?");
	scanf("%d", &CONT_NUM);

	// Manipulate variables
	if ( CONT_NUM%2 != 0 )
	{

		BOGO_NUM = (((CONT_NUM)-(CONT_NUM%2))/2);
		TOTAL_COST = (BOGO_NUM + (CONT_NUM%2))*ONE_OJ_COST;

	}
	else
	{

		TOTAL_COST = (CONT_NUM/2)*ONE_OJ_COST;

	}

	// Provide output
	printf("The total cost is $%.02lf", TOTAL_COST);


}
