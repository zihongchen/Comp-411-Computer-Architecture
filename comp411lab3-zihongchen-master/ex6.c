/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], c;
  int next;
  int start;
  
  puts("Please enter the starting number of the Collatz sequence:");
  scanf("%d",&start);
  printf("%d", start);
  do{
   if(start % 2 == 0){
       start = start /2;
   }else 
   { start = start*3 + 1; }
    
   printf(", %d",start);
  }while(start > 1);

  printf("\n");
}
