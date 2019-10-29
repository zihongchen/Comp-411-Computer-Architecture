/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  
     int num;
     char* end;

  printf("Enter a number from 1 to 20:\n" );
  scanf("%d", &num);//& redeclare  the variable  num. You have to decalre it as int first.
 

  if(num > 0 && num<=20)
{

  printf("Here are the first %d ordinal numbers:\n",num);
	for( int i = 1; i <= num; i++){

	if(i == 1){
	end = "st";	}

	else if(i == 2){
        end = "nd";     }

	else if(i == 3){
        end = "rd";     }

	else{
	end = "th";     }

	printf("%d%s\n",i,end);

                                       }

} else{
	printf("Number is not in the range from 1 to 20\n");
       }

}
