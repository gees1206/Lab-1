/*******************************************************************************************

* Programmer: Gabriel Szabo

* Class: CptS 121, Fall 2022; Lab Section 15

* Programming Assignment: Lab 11

* Date: November 11, 2022

* Description: This program will handle simple file extraction and

*******************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings
#include <stdio.h> // necessary to use printf () and scanf ()
#include <math.h> // for sqrt()
#define PI 3.1415 //Define macro constant for pi
#define ROWS 10
#define COLS 10
#include <stdlib.h> //For random function
#include <time.h>

typedef struct employee

{

    char name[100];      // employee's name - last, first

    char title;          // title 'B' or 'M'

    double hours_worked; // total number of hours worked

    double payrate;      // pay rate per hour

    double payment;      // total payment for the pay period – you will compute!

} Employee;

double calculate_payment(Employee worker);