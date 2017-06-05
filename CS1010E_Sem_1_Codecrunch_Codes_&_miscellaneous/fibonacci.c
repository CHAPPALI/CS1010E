#include <stdio.h>

int main(){
	int i, n, f0=0, f1=1;
	// f0 and f1 are running fibonacci terms, initialise to 0 and 1
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	// special case: if n is 0, then output is 0
	if (n==0)
		printf("F(%d) is %d\n", n, f0);
	else {
		for (i=1 ; i<n ; i++){
			// replace f0 and f1 with the next terms in the fibonacci sequence
			f1 = f0+f1;
			f0 = f1-f0;
			
			/* the above operations can also be done with the following
			temp = f0;
			f0 = f1;
			f1 = f0 = temp;			
			*/
		}
		
		printf("F(%d) is %d\n", n, f1);
	}
	
	return 0;
}
