// Manuel J. Trujillo-Silva
// Practice: Loops 01 - Stolen Orange Juice Pt 2
#include <stdio.h>

int main()
{
	// Declare variables
	int rm_counter, n;
	double oj_weight, cont_cost, peroz_cost, total_cost = 0, oz_taken;

	// Ask for info
	printf("What is the weight (in oz.) of the original container of OJ?\n");
	scanf("%lf", &oj_weight);
	printf("\nWhat is the cost of the original container of OJ (in dollars)?\n");
	scanf("%lf", &cont_cost);

	peroz_cost = cont_cost/oj_weight;

	printf("\nHow many times did your roommate take your juice?\n");
	scanf("%d", &rm_counter);

	// Loop / Output
	for(n=0; rm_counter-n != 0; n++)
	{
		printf("\nHow much juice did your roommate take this time (in oz.)?\n");
		scanf("%lf", &oz_taken);

		total_cost = total_cost + oz_taken*peroz_cost;

		if (total_cost >= 10)
		{
			printf("\nYour roommate owes you $10.00.\n");
			total_cost = total_cost - 10;
			continue;
		}
		else
		{
			continue;
		}

	}

    printf("\nYour roommate owes you %.02lf.", total_cost);


}
