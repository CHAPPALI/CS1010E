#include <stdio.h>
#include <stdlib.h>

int main()

{  int b;
   int a;
   int max;
   int denom;
   int num;
   int remainder= 0;

   scanf("%d",&max);


   for(denom = 1; denom <= max; denom++)
   {

     for(num = 0; num <= denom ;num++)
    {
      printf("%d/%d,",num,denom);
      a = num;
      b = denom;
     while(b != 0){

      remainder = a%b;
      a = b;
      b = remainder;
      } if( a==1){printf("YES\n");}

         if(a != 1){ printf("NO\n");}

            }

}

return 0; }







