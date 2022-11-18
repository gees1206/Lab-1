/*******************************************************************************************

* Programmer: Gabriel Szabo

* Class: CptS 121, Fall 2022; Lab Section 15

* Programming Assignment: Lab 11

* Date: November 11, 2022

* Description: This program will handle simple file extraction and

*******************************************************************************************/

#include "functions.h"

double calculate_payment(Employee worker) {
	double total_payment = 0, payment, overtime;
	double overtime_multiplier = 1.5;

	//For basic employee
	if (worker.hours_worked > 80.0) {
		//For managers
		if (worker.title == 'M') {
			overtime_multiplier = 1.8;
		}
		overtime = (worker.hours_worked - 80) * overtime_multiplier * worker.payrate;
		payment = (80 * worker.payrate);
		total_payment = overtime + payment;
	}
	else {
		total_payment = worker.hours_worked * worker.payrate;
	}

	return total_payment;
}