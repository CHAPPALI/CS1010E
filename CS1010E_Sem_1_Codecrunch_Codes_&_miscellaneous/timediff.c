#include <stdio.h>

int main(){
	int h1, m1, s1, h2, m2, s2, diff;
	
	scanf("%d %d %d", &h1, &m1, &s1);
	scanf("%d %d %d", &h2, &m2, &s2);
	
	// time difference can be computed by
	diff = 3600*(h2-h1)+60*(m2-m1)+(s2-s1);
	
	printf("%d\n", diff);
	
	return 0;
}
