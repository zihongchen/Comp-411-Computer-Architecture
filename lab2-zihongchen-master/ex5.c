/*  Example: C program to find area of a circle */

#include <stdio.h>

int main()
{   int sb = 0;
	while(sb ==0)
  {
	int i = 2;
	int input = 0;

	printf("Number ?\n" );
	scanf("%d",&input);
	if( input == 0 ){
	printf("Done\n");
	break;         }
	
	while(i >=2){
	 if(input == 1){ 
                printf("%d is a triangular number\n", input);
                break;                                          }
	int triangleNum = i * (i + 1)/2 ;
		if(input == triangleNum){
		 printf("%d is a triangular number\n", input);
		 i = 2;
	  	 break; 
		 }
		 if(triangleNum > input){

		  printf("%d is not triangular, ", input);
		  int smallNum = (i-1) * i / 2; 
		  printf("nearest triangular number below %d is %d\n",input, smallNum);
		  i = 2;
		  break;
					}
		 i++;

}





    }





}

