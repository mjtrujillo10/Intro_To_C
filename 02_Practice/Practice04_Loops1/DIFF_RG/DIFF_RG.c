// Manuel J. Trujillo-Silva
// Practice Problem B: Difficulty with the registrar

#include <stdio.h>
#include <stdlib.h>
int main()
{
	// Declare variables
	int you_owe = ((rand()% 4501)+500), guess = 0, counter;

	// Make guesses
	while(you_owe != guess)
	{
		printf("Please input an integer value for 'X' in the following:\n'Do I owe more than X dollars?'\n");
		scanf("%d", &guess);

		if(you_owe > guess)
		{
			printf("\nYes, you owe more than %d dollars.\n", guess);
			continue;
		}
		else if (you_owe < guess)
		{
			printf("\nNo, you do not owe more than %d dollars.\n", guess);
			continue;
		}
		else
		{
			printf("\nNo, you do not owe more than %d dollars.\n", guess);
			break;
		}
	}

	printf("\nCongratulations for figuring out you owe %d dollars.\n", you_owe);


}

