/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159



int compute()
{
        float c ,a, r;

   printf("Enter radius (in cm):\n");
   scanf("%f", &r);

  if(r != 0){

  a = PI * r * r / 2.54 / 2.54;
  c = PI * 2 * r / 2.54;
  printf("Circle's area is %3.2f (sq in).\n", a);
  printf("Its circumference is %3.2f (in).\n", c);
  compute();
	//return 5;
             }
else{

  printf("Circle's area is %3.2f (sq in).\n", 0.0);
  printf("Its circumference is %3.2f (in).\n",0.0);
	//return  5;

    }

}
int main()
{
 
   compute();
	//return 5;
}









