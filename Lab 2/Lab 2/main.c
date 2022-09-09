/*******************************************************************************************

* Programmer: Gabriel Szabo

* Class: CptS 121, Fall 2022; Lab Section 15

* Programming Assignment: Lab 2

* Date: September 9, 2022

* Description: This program does ... well nothing.

*******************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings
#include <stdio.h> // necessary to use printf () and scanf ()

double Slope(double coords[]) { //Calculates slope from 2 sets of cords
	double slope = (coords[3] - coords[1]) / (coords[2] - coords[0]);
	return slope;
}

double PerpSlope(double coords[]) { //Calculates the perp slope
	return -1 / Slope(coords);
}

int main(void) {
	double coords[4];

	printf("Please enter your x1 and y1 coordinates: ");
	scanf(" %lf%lf", &coords[0],&coords[1]);

	printf("Please enter your x2 and y2 coordinates: ");
	scanf(" %lf%lf", &coords[2], &coords[3]); 

	printf("\nThe slope of your function is: %.3lf",Slope(coords)); //Print resulting slope

	//average out the two x values and y values
	double midpoint[] = {(coords[2]+coords[0])/2, (coords[3]+coords[1])/2};
	double perp_slope = PerpSlope(coords); //Calculate perp slope once

	//Print what the midpoint calculated above
	printf("\nThe midpoint between the two points is: (%0.3lf,%0.3lf)", midpoint[0], midpoint[1]);
	printf("\nThe Perpendicular slope to your 2 coordinate pair is: %0.3lf", perp_slope); //Print perpendicular slope
	printf("\nThe y-intercept of the function created: %0.3lf", midpoint[1] - perp_slope * midpoint[0]); //Print y-intercept of the perpendicular function
	printf("\nThe original points were: (%0.3lf,%0.3lf),(%0.3lf,%0.3lf)", coords[0], coords[1], coords[2], coords[3]);
	printf("\nThe equation of perp bisector is: y_int=y_mid + m * x_mid = %0.3lf + (%0.3lf)(%0.3lf)\n", midpoint[0], perp_slope, midpoint[1]);
	return 1;
}