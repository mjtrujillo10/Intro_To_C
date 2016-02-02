// Manuel J. Trujillo-Silva
// HW 02: Planes (Basic Input and Output)

#include <stdio.h>
#include <string.h>

#define DIST_NEW_YORK 940
#define DIST_PARIS 4494.92
#define DIST_LONDON 4343.95
#define DIST_ROME 5121.76
#define DIST_FRANKFURT 4740.48
#define DIST_SAN_FRAN 2440.01
#define DIST_TOKYO 7262.04
#define DIST_HAVANA 380.23
// All city distances were determined by using http://www.distance-cities.com/

#define SPEED_747 570
#define SPEED_777 560
#define SPEED_A330 541
#define SPEED_A380 570
#define SPEED_CONCORDE 1334
// All plane cruising speeds were determined using wikipedia; specifically:
// https://en.wikipedia.org/wiki/Boeing_747
// https://en.wikipedia.org/wiki/Boeing_777
// https://en.wikipedia.org/wiki/Airbus_A330
// https://en.wikipedia.org/wiki/Airbus_A380 (says that cruise speed is mach 0.85 which is == to Boeing 747)
// https://en.wikipedia.org/wiki/Concorde

int main()
{
	//Declaring my I/O variables
	char plane_input[128], city_input[128], plane_output[128], city_output[128];
	double plane_speed = 0, city_dist = 0;
    int flight_time_tot, flight_time_hr, flight_time_min, var_switch;

	//Declare my city strings
	char ny_str[] = "New York", ny_str01[] = "New_York", paris_str[] = "Paris", london_str[] = "London";
	char rome_str[] = "Rome", frank_str[] = "Frankfurt", sf_str[] = "San Francisco", sf_str01[] = "San_Francisco";
	char tokyo_str[] = "Tokyo", havana_str[] = "Havana";

	//Declare my plane strings
	char bo_747[] = "Boeing 747", bo_777[] = "Boeing 777", ab_330[] = "Airbus A330", ab_380[] = "Airbus A380", con[] = "Concorde";
	char bo_747chk[] = "Boeing_747", bo_777chk[] = "Boeing_777", ab_330chk[] = "Airbus_330", ab_380chk[] = "Airbus_A380";

	//Request input
	printf("To what city are you flying from Orlando? \nNOTE: Please input the proper name of the city (e.g., 'Orlando,' not 'orlando') \nand place an underscore if necessary (e.g., Los_Angeles, not Los Angeles).\n");
	scanf("%s", city_input);
	printf("In what kind of plane will you be flying?\nPlease place an underscore between the manufacturer and model if necessary (e.g., 'Boeing_747', not 'Boeing 747').\n");
	scanf("%s", plane_input);

	//Manipulate variables: determining the destination distance

	if (strcmp(city_input, ny_str01) == 0)
	{
		city_dist = DIST_NEW_YORK;
		strcpy(city_output, ny_str);
	}
		else if (strcmp(city_input, "Paris") == 0)
	{
		city_dist = DIST_PARIS;
		strcpy(city_output, paris_str);
	}
	else if (strcmp(city_input, london_str) == 0)
	{
		city_dist = DIST_LONDON;
		strcpy(city_output, london_str);
	}
	else if (strcmp(city_input,rome_str) == 0)
	{
		city_dist = DIST_ROME;
		strcpy(city_output, rome_str);
	}
	else if (strcmp(city_input, frank_str) == 0)
	{
		city_dist = DIST_FRANKFURT;
		strcpy(city_output, frank_str);
	}
	else if (strcmp(city_input, sf_str01) == 0)
	{
		city_dist = DIST_SAN_FRAN;
		strcpy(city_output, sf_str);
	}
	else if (strcmp(city_input, tokyo_str) == 0)
	{
		city_dist = DIST_TOKYO;
		strcpy(city_output, tokyo_str);
	}
	else if (strcmp(city_input, havana_str) == 0)
	{
		city_dist = DIST_HAVANA;
		strcpy(city_output, havana_str);
	}
	else
	{
		printf("City not found. Please make sure you are typing the city's name correctly.\n");
	}

	// Manipulate switch variable
	if (strcmp(plane_input, bo_747chk) == 0)
	{
		var_switch = 1;
	}
	else if (strcmp(plane_input, bo_777chk) == 0)
	{
        var_switch = 2;
	}
	else if (strcmp(plane_input, ab_330chk) == 0)
	{
        var_switch = 3;
	}
	else if (strcmp(plane_input, ab_380chk) == 0)
	{
        var_switch = 4;
	}
	else if (strcmp(plane_input, con) == 0)
	{
        var_switch = 5;
	}
	else
	{
		printf("Plane not found. Please make sure you are entering the name of the plane correctly.\n");
	}



	// Switch: determining the speed of the plane

    switch (var_switch)
    {
        case 1:
        {
            plane_speed = SPEED_747;
            strcpy(plane_output, bo_747);
            break;
        }

        case 2:
        {
            plane_speed = SPEED_777;
            strcpy(plane_output, bo_777);
            break;
        }

        case 3:
        {
            plane_speed = SPEED_A330;
            strcpy(plane_output, ab_330);
            break;
        }

        case 4:
        {
            plane_speed = SPEED_A380;
            strcpy(plane_output, ab_380);
            break;
        }

        case 5:
        {
            plane_speed = SPEED_CONCORDE;
            strcpy(plane_output, con);
        }
    }




    //Manipulate variables: determine length of flight
    flight_time_tot = (60*(city_dist)/(plane_speed));
    flight_time_hr = ((flight_time_tot - (flight_time_tot%60))/60);
    flight_time_min = (flight_time_tot%60);

	//Provide output
	if (flight_time_tot > 0)
	{
		printf("The flight time between Orlando and %s on a %s will be about %d hours and %d minutes\n", city_output, plane_output, flight_time_hr, flight_time_min);
	}
	else
	{
		printf("Entry error. Please make sure both the destination and plane were entered correctly.\n");
	}
}
