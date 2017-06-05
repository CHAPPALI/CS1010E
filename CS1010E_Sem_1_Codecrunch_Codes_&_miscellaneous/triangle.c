#include <stdio.h>

int main(){
	int s1, s2, s3;
	
	printf("Enter three sides of triangle: ");
	scanf("%d %d %d", &s1, &s2, &s3);
	
	// if all sides are equal, then triangle is equilateral
	if (s1==s2 && s1==s3)
		printf("Triangle with sides %d %d %d is equilateral\n", s1, s2, s3);
	// else if any two sides are equal, then triangle is isosceles
	else if (s1==s2 || s1==s3 || s2==s3)
		printf("Triangle with sides %d %d %d is isosceles\n", s1, s2, s3);
	// else then triangle is scalene
	else
		printf("Triangle with sides %d %d %d is scalene\n", s1, s2, s3);
	
	return 0;
}
