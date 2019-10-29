/*:wq:wq
 * Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */

#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */



#include <ctype.h>






void printString( char stringx[NUM][LEN] ){
int i;
int j;
    for( i = 0; i < NUM; i++){
     for ( j = 0; j < LEN; j++){
      printf("%c", stringx[i][j]);
           if( stringx[i][j] == '\n')
             break;
     } 
    }
}

int main()
{
  char strings[NUM][LEN];
  char tempString[LEN];
  int i;
  int j;
  printf("Please enter %d strings, one per line:\n", NUM);

  /* Write a for loop here to read NUM strings.

     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length.  Note that the
     newline and NULL characters will be included in LEN.
  */
 for( i = 0; i < NUM; i++){
    fgets( strings[i], LEN, stdin);
 }

  puts("\nHere are the strings in the order you entered:");

  /* Write a for loop here to print all the strings. */

  
  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Use the function my_compare_strings() to compare two strings.  If they are out of order,
     use the function my_swap_strings() to swap their contents.

  */
printString( strings );
  
  for ( i = 0; i < NUM; i ++){
    
    for( j = i; j < NUM; j++ ){
        if(strcmp(strings[j], strings[i]) < 0){

            strcpy(tempString, strings[i]);
            
            strcpy(strings[i], strings[j]);
            
            strcpy(strings[j], tempString);
   }
    }

  }
  
  puts("\nIn alphabetical order, the strings are:");     
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */
printString( strings );
}
