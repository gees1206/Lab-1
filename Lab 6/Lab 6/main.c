
#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings
#include <stdio.h> // necessary to use printf () and scanf ()
#include <math.h> // for sqrt()
#include <stdlib.h>
#define PI 3.1415 //Define macro constant for pi


int main(void) {
	
	int ret[] = {0,0,0,0};
	int amount = 1530;

	ret[0] = amount / 100;
	ret[1] = amount % 100 / 50;
	ret[2] = amount % 100 % 50 / 20;
	ret[3] = amount % 100 % 50 % 20 / 10;

	for (int i = 0; i < 4; i++) {
		printf("\n%d", ret[i]);
	}


	/*
	int range = 100;
	int nums[200];
	int num = -range;
	for (int i = 0; i < range*2; i++) {
		nums[i] = num;
		num++;
	}
	time_t t;

	srand((unsigned) time(&t));
	int r = rand() %100;      // Returns a pseudo-random integer between 0 and RAND_MAX.
	if(rand() %2 == 1) {
		r *= -1;
	}
	
	int guess = 1, correct = 0;

	printf("Guess the number:\n");

	while (correct != 1) {
		scanf("%d",&guess);
		if (guess > range || guess < -range) {
			printf("Invalid guess\n");
		}
		if (guess == r) {
			printf("You are correct!");
			correct = 1;
		}
		else {
			if (guess < r) {
				printf("Your guess is lower than\n");
			}
			else {
				printf("Your guess is higher than\n");
			}
		}
	}


	printf(" %d", r);

	*/

	/*int n = 3, factorial = 1;
	
	while (n > 0) {
		factorial *= n;
		n--;
	}

	printf("%d",factorial);
	*/

	/*FILE* infile = NULL;

	//Initialize two streams for input and output files
	infile = fopen("input.dat", "r");

	//If the file is empty return 0
	if (infile == NULL) {
		return 0;
	}

	int nums[5], sum = 0;

	for (int i = 0; i < 5; i++) {
		nums[i] = read_int(infile);
		
		//For part b, %10 for individual, then sum then print
		//Two loops, for and while


		sum = sum + nums[i];
	}
	print_prime(sum);*/

	return 1;
}


int is_prime(int num) {
	if (num == 1 || num == 0) {
		return 1;
	}

	for (int i = 2; i * i < num; i++) {
		if(num%i == 0 && num != i){
			return 0;
		}
	}
	return 1;
}

print_prime(int num) {
	if (is_prime(num) == 1) {
		printf("\nnumber %d is prime", num);
	}
	else {
		printf("\nnumber %d is not prime", num);
	}
}

int read_int(FILE* infile) {
	int i = 0;
	fscanf(infile, "%d", &i);
	return i;
}