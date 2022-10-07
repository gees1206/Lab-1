
#include "handler.h"


int main(void) {

	int num = 583;
	int largest = 0;
	int x = 0;

	while (num != 0){
		x = num % 10;
		largest = fmax(x,largest);
		num = num / 10;
	}
	

	printf("%d", largest);
	/*
	double theta, distance, velocity;
		
	theta = get_theta();
	distance = get_distance();
	velocity = get_velocity();

	double time = calc_time(distance,velocity,theta);
	double height = calc_height(distance,velocity,theta);
	printf("Flight time: %lf", time);
	printf("\nHeight: %lf", height);
	*/
	
	return 0;
}