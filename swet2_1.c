/*Q.1 Write a Program to check whether a number is even or odd using the ternary operator.*/


#include<stdio.h>
#include<conio.h>

void main (){
int a;
printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
printf(" TO CHECK IF THE NUMBER IS EVEN OR ODD\n");
printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");

printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
printf("                       Enter any number :  ");
scanf("%d",&a);
printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

printf("*********************\n");
(a/2) ? printf(" This number is Even")
      : printf(" This number is odd") ;
printf("\n*********************\n");

getch();    
}
/*Input:
         Enter any number: 12
Output: 
         This number is Even.
*/

