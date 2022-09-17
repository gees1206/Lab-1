
#include "handler.h"


int main(void) {
	double theta, distance, velocity;
		
	theta = get_theta();
	distance = get_distance();
	velocity = get_velocity();

	double time = calc_time(distance,velocity,theta);
	double height = calc_height(distance,velocity,theta);
	printf("Flight time: %lf", time);
	printf("\nHeight: %lf", height);
	
	return 0;
}