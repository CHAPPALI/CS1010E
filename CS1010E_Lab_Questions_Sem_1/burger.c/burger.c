#include <stdio.h>
#include <stdlib.h>


int burger;
int sides;
int drinks;
int burgerp;
int sidesp;
int drinksp;
int final;
int final2;
int final3;
int dollars;
int cents;
int main(void)
{

 scanf(" %d" ,&burger);

 scanf( "%d" ,&sides);

 scanf( "%d" ,&drinks);

 burgerp = 985 * burger;

 sidesp = 280 * sides;

 drinksp = 195 * drinks;

final = burgerp + sidesp + drinksp;

final2 = final * 0.070;

final3 = final2 + final;

 dollars  = final3 / 100;
 cents = final3%100;




 if( cents < 10){printf( "$%d.0%d\n" ,dollars ,cents);}

 else{printf( "$%d.%d\n" ,dollars ,cents);/* the importance of back slash n in codecrunch*/
 scanf( "%d" , cents);}

return 0;}
