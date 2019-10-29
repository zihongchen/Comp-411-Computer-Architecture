/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
int Num[10];

	printf("Enter six integers:\n" );

	for( int i = 0; i < 6; i++){
	scanf("%i",&Num[i]);
				  }
	printf("1234567890bb1234567890\n");
	for( int i = 1; i <= 6; i++){
	if(i % 2 != 0 ){ 
	        printf("%10d",Num[i-1]);
			}
	
	if(i % 2 == 0 ){ 
		printf("%12d\n", Num[i-1]);
			}

}


}

