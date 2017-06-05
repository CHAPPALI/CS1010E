#include <stdio.h>

int main(){
	int n, rev=0;
	// rev is to store the digit reverse of n
	
	printf("Enter a non-negative number: ");
	scanf("%d", &n);
	printf("The reverse of %d is ", n);
	
	/*
	Start with the last digit of n, add this last digit into the digits of rev, take away the 
	last digit of n, repeat this until n has no digits left
	*/
	while (n>0){
		rev = rev*10+n%10; 	// add the last digit of n into the digits of rev
		n = n/10; 			// take away the ast digit of n
	}
	
	printf("%d\n", rev);
	
	return 0;
}
