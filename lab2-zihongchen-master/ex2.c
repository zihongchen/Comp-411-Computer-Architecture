/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
double Sum = 0;
double Min = 0;
double Max = 0;
double input = 0;
double product = 0;

  printf("Enter 10 floating-point numbers:\n" );
	
	for( int i = 1; i <= 10; i++){
	scanf("%lf",&input);
	if(i == 1){ 
		Min = input;
		Max = input;
		product = input;
		Sum = input;
		  }else{
		Sum += input;
		product *= input; 
		if( input < Min){ Min = input;}
		if( input > Max){ Max = input;}

			} 





					}
	printf("Sum is %.5lf\n",Sum );
	printf("Min is %.5lf\n",Min );
	printf("Max is %.5lf\n",Max );
	printf("Product is %.5lf\n",product );

}
