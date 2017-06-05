#include <stdio.h>

int main(){
	int year;
	
	printf("Enter the year : ");
	scanf("%d", &year);
	printf("Year %d in roman numerals is ", year);
	
	// start with the digit in the thousands position, print the letter M as many as required
	while (year>=1000){
		printf("M");
		year -= 1000;
	}
	// now it is guaranteed that year is less than 1000
	// continue with the digit in the hundreds position
	while (year>=900){
		printf("CM");
		year -= 900;
	}
	while (year>=500){
		printf("D");
		year -= 500;
	}
	while (year>=400){
		printf("CD");
		year -= 400;
	}
	while (year>=100){
		printf("C");
		year -= 100;
	}
	// it is now guaranteed that year is less than 100
	// continue for the last two digits in the same manner
	while (year>=90){
		printf("XC");
		year -= 90;
	}
	while (year>=50){
		printf("L");
		year -= 50;
	}
	while (year>=40){
		printf("XL");
		year -= 40;
	}
	while (year>=10){
		printf("X");
		year -= 10;
	}
	while (year>=9){
		printf("IX");
		year -= 9;
	}
	while (year>=5){
		printf("V");
		year -= 5;
	}
	while (year>=4){
		printf("IL");
		year -= 4;
	}
	while (year>=1){
		printf("I");
		year--;
	}
	/*
	Note that the whiles for year>=900, 500, 400, 90, 50, 40, 9, 5, 4 can be replaced by ifs 
	since it is guaranteed that each conditional statement can be true for at most one time
	*/
	
	printf("\n");
	
	// finally, one of the longest code scripts we've ever had so far
	return 0;
}
