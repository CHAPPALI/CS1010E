#include <stdio.h>

int main(){
	int n, d, sumd=1;
	/*
	d is used for index, sumd is the running sum of the divisors of n, initialise to 1 since it is guaranteed that 1
	is always a divisor of n
	*/
	
	printf("Enter integer: ");
	scanf("%d", &n);
	
	/*
	Perform divisibility check by d for each d=2,3, ..., d-1. However, one can reduce the execution
	time by check until square root of d, and each time n is divisible by d, add both d and n/d to
	the sum
	*/	
	for (d=2 ; d*d<=n ; d++){
		if (n%d==0)
			sumd = sumd+d+n/d;		
	}
	/*
	in this case therefore, if n is 1000000000, the program will only do less than 40000
	computations
	*/
	
	if (sumd==n)
		printf("%d is a perfect number\n", n);
	else
		printf("%d is not a perfect number\n", n);
	
	return 0;
}
