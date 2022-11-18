/*******************************************************************************************

* Programmer: Gabriel Szabo

* Class: CptS 121, Fall 2022; Lab Section 15

* Programming Assignment: Lab 11

* Date: November 11, 2022

* Description: This program will handle simple file extraction and

*******************************************************************************************/

#include "functions.h"

int main(void) {
	FILE* PAYROLL_TXT;
	PAYROLL_TXT = fopen("payroll.txt", "r");
	char ch;

	Employee payroll[200]; // the input file may not exceed 200 employee records  

	for (int i = 0; i < 200; i++) {
		ch = fgetc(PAYROLL_TXT);
		if (ch == EOF) {
			break;
		}
		//Read each input into the proper employee form

		//Reads name for each employee
		fgets(payroll[i].name, sizeof payroll[i].name, PAYROLL_TXT);

		//Reads their title
		payroll[i].title = fgetc(PAYROLL_TXT);

		//Reads hours worked
		fscanf(PAYROLL_TXT, "%lf", &payroll[i].hours_worked);

		//Reads payrate
		fscanf(PAYROLL_TXT, "%lf", &payroll[i].payrate);

		//Calculate payment
		payroll[i].payment = calculate_payment(payroll[i]);
	}

	FILE* PAID;
	PAID = fopen("paid.txt", "w");

	//Company has to have at least one employee
	double total_payroll = 0;
	double average_pay = payroll[0].payment;
	double max_pay = payroll[0].payment;
	double min_pay = payroll[0].payment;

	//For each employee
	for (int i = 0; i < 200; i++) {
		//Until the last employee on file
		if (payroll[i].title == 'B' || payroll[i].title == 'M') {
			total_payroll = total_payroll + payroll[i].payment;
			//Max pay
			if (payroll[i].payment > max_pay) {
				max_pay = payroll[i].payment;
			}
			//Min pay
			if (payroll[i].payment < min_pay) {
				min_pay = payroll[i].payment;
			}
		}
		//Reach end of employees, calculate average pay and break loop
		else {
			average_pay = total_payroll / i;
			fprintf(PAID, "Total: $%lf\n", total_payroll);
			fprintf(PAID, "Average: $%lf\n", average_pay);
			fprintf(PAID, "Max: $%lf\n", max_pay);
			fprintf(PAID, "Min: $%lf\n", min_pay);
			break;
		}
	}

	fclose(PAYROLL_TXT);
	fclose(PAID);
	return 0;
}