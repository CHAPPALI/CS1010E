#include <stdio.h>

int main(){
	double mass, height, bmi;
	
	scanf("%lf %lf", &mass, &height);
	
	bmi = mass/(height*height);
	
	printf("%lf\n", bmi);
	
	return 0;
}
