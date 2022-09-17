#include "handler.h"

double get_theta(void) {
	printf("Enter theta: ");
	double theta;
	scanf("%lf", &theta);
	return theta;
}

double get_distance(void) {
	printf("Enter distance: ");
	double distance;
	scanf("%lf", &distance);
	return distance;
}
double get_velocity(void) {
	printf("Enter velocity: ");
	double velocity;
	scanf("%lf", &velocity);
	return velocity;
}

double calc_time(double distance, double velocity, double theta) {
	return (distance) / (velocity * cos(theta));
}

double calc_height(double distance, double velocity, double theta) {
	double time = calc_time(distance, velocity, theta);
	return velocity * sin(theta) * time - ((G * pow(time, 2)) / 2);
}