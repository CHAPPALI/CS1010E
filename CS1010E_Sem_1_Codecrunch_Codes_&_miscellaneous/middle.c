#include <stdio.h>

int main(){
	int n1, n2, n3, mid;
	
	printf("Enter three values: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	// if n1 is between n2 and n3, then n1 is the middle
	if ((n1>n2 && n1<n3) || (n1<n2 && n1>n3))
		mid = n1;
	// else if n2 is between n1 and n3, then n2 is the middle
	else if ((n2>n3 && n2<n1) || (n2<n3 && n2>n1))
		mid = n2;
	// else then n3 is the middle
	else
		mid = n3;
		
	printf("The middle value is %d\n", mid);
	
	return 0;
}
