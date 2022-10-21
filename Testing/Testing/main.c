#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings
#include <stdio.h> // necessary to use printf () and scanf ()
#include <math.h> // for sqrt()
#define PI 3.1415 //Define macro constant for pi
#include <stdlib.h> //For random function


int main(void) {

	char letters[7] = {'A', 'Z', 'a', 'z', '1', '2', '1'};
	char let[15] = {'C','p','t','s', ' ', '1', '2', '1', ' ', 'i', 's', ' ', 'f', 'u', 'n'};

	int count = count_alphas(letters, 7);
	int cnt = remove_whitespace(let, 15);

	//printf("%d", count);
	printf("%d", cnt);
	

	return 1;
}


int count_alphas(char l[], int len) {
	int count = 0;

	//For each element in the array, count letters
	for (int i = 0; i < len; i++) {
		if ((l[i] > 64 && l[i] < 91) || (l[i] > 96) && (l[i]) < 123) {
			count++;
		}
	}

	return count;
}

int remove_whitespace(char l[], int len) {
	int count = 0;
	/*
	* for (int i = 0; i < 15; i++) {
		printf("%c", l[i]);

	}
	printf("\n");
	*/
	
	//Go through each char of the array except spaces in the back
	for (int i = 0; i < len - count; i++) {
		if (l[i] == ' ') {
			l[i] = l[i + 1];
			//Move the space to the back and following chars to the front
			for (int j = i; j < len - count; j++) {
				l[j] = l[j + 1];
			}
			count++;
			l[len - count] = ' ';
		}
	}

	/*for (int i = 0; i < 15; i++) {
		printf("%c", l[i]);

	}*/
	

	return count;
}