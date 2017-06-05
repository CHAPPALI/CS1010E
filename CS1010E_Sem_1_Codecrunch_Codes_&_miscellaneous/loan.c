#include <stdio.h>

int main(){
	int incp, cred, debt, risk;
	
	// read income per annum, credit history, and debt
	// credit history: 0=good, 1=bad, 2=unknown
	// debt: 0=high, 1=low
	scanf("%d %d %d", &incp, &cred, &debt);
	
	if (incp>35000)
		if (cred==0)
			risk = 1;
		else if (cred==1)
			risk = 3;
		else
			risk = 2;
	else if (incp>=15000)
		if (cred==0)
			risk = 2;
		else if (cred==1)
			risk = 4;
		else 
			if (debt==0)
				risk = 5;
			else
				risk = 3;
	else
		risk = 1;
	
	printf("%d\n", risk);
	
	return 0;
}
