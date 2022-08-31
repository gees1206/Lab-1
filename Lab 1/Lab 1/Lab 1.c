/*******************************************************************************************

* Programmer: Gabriel Szabo

* Class: CptS 121, Fall 2022; Lab Section 15

* Programming Assignment: Lab 1

* Date: August 30, 2022

* Description: This program evaluates simple equations provided in PA1.

*******************************************************************************************/

#include <iostream>

#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings



#include <stdio.h> // necessary to use printf () and scanf ()



int main(void) // the starting point for all C programs

{

    // we need to request memory for

    int number1_int = 0, number2_int = 0; // 2 variable declarations - reserves two memory blocks for integers and sets them to 0's

    double number1_float = 0.0, number2_float = 0.0; // reserves two memory blocks for numbers with high precision (floating-point)



    printf("Enter two integer values: "); // ask the user

    scanf("%d%d", &number1_int, &number2_int); // read the integers typed through the keyboard - %d is for "decimal", i.e. integers



    printf("Enter two floating-point values: "); // ask the user

    scanf("%lf%lf", &number1_float, &number2_float); // read the integers typed through the keyboard - %lf is for "long float", i.e. double precision numbers



    // place all code for the subtasks/operations below here

    return 0; // return a success status (value 0) indicating the program worked fine

} // end of the main () function