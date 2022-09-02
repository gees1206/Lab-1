/*******************************************************************************************

* Programmer: Gabriel Szabo

* Class: CptS 121, Fall 2022; Lab Section 15

* Programming Assignment: Lab 1

* Date: September 2, 2022

* Description: This program evaluates simple equations provided in PA1.

*******************************************************************************************/


#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings
#include <stdio.h> // necessary to use printf () and scanf ()

AskNum(void) {

    printf("Hello World, I am in CptS 121!\n"); //Prints Hello World message

    int number1_int = 0, number2_int = 0; // 2 variable declarations - reserves two memory blocks for integers and sets them to 0's

    double number1_float = 0.0, number2_float = 0.0; // reserves two memory blocks for numbers with high precision (floating-point)


    printf("Enter two integer values: "); // ask the user

    scanf("%d%d", &number1_int, &number2_int); // read the integers typed through the keyboard - %d is for "decimal", i.e. integers

    printf("Enter two floating-point values: "); // ask the user

    scanf("%lf%lf", &number1_float, &number2_float); // read the integers typed through the keyboard - %lf is for "long float", i.e. double precision numbers

    printf("\nCalculating numbers...\n");

    printf("%d%s%d", number1_int, "+", number2_int); // print int1 + int2 operation
    printf("=%d", number1_int + number2_int); //print result of operation

    printf("\n%lf%s%lf", number2_float, "-", number1_float); //print float2 - float1 operation 
    printf("=%lf", number2_float - number1_float);

    printf("\n%d%s%lf", number1_int, "*", number1_float); //print int1 * float1
    printf("=%lf", number1_int * number1_float);

    printf("\n%d%s%d", number1_int, "/", number2_int); //print int1 / int2
    printf("=%d", number1_int / number2_int); //print int
    printf("\tAs float:%lf", number1_int / number2_int); //print float

    printf("\n%d%s%lf", number1_int, "/", number2_float); //print int1 / float2
    printf("=%lf", number1_int / number2_float); //print int
    printf("\tAs float:%lf", number1_int / number2_float); //print float

    printf("\n%lf%s%d", (float)number1_int, "/", number2_int); //print int1 cast to float / by int2
    printf("=%lf", (float)number1_int / number2_int);

    printf("\n%lf%s%lf", number1_float, "%", number2_float); //print float1 % float2
    printf("=%lf", fmod(number1_float, number2_float)); //Can't mod 2 floating values

    // Print 1 if the number is odd, print 0 if the number is even
    printf("\nNumber:%d is %d \t Number:%d is %d\n\n", number1_int, number1_int % 2, number2_int, number2_int % 2);
}

OhmsLaw() {
    int I = 0, R = 0;
    //Ask for int Current and Resistance
    printf("Enter your Current and Resistance:");
    scanf("%d%d",&I,&R);

    printf("Bzzzz... Voltage=%d\n",I*R);
}

int main(void) { // the starting point for all C programs

    int select = 99;
    
    while (select!=0) {

        //Ask which function to run
        printf("To exit type 0\n");
        printf("Type 1 for \"Ask Numbers\"\n");
        printf("Type 2 for \"Ohms Law\"\n");
        scanf("%d", &select); //Write the selection to int select

        //Selection mechanism that compares select variable with options
        switch (select) {
        case 0:
            break;
        case 1:
            AskNum();
            break;
        case 2:
            OhmsLaw();
            break;

        default: //If not the case, ask again
            printf("That is not a valid selection\n");
        }
        
    }

    printf("\nexit"); //End of sequence
    return 0; // return a success status (value 0) indicating the program worked fine

} // end of the main () function