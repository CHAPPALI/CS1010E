#include <stdio.h>

int main(){
	int n1, n2, lcm;
	
	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	
	/*
	start with the higher value between the two values n1 and n2, and keep increasing by the same
	value until that number is divisible by the other
	*/
	if (n1>n2){
		lcm = n1;
		
		while (lcm%n2!=0)
			lcm += n1;
	}
	else {
		lcm = n2;
		
		while (lcm%n1!=0)
			lcm += n2;
	}
	
	printf("The LCM of %d and %d is %d\n", n1, n2, lcm);
	
	return 0;
}
