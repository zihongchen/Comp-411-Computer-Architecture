/*:wq:wq
 * Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <ctype.h>

#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */


int my_compare_strings(char string1[LEN], char string2[LEN]) {

  /* Write code here to compare string1 and string2, character by character.
     WITHOUT USING ANY C STRING LIBRARY FUNCTIONS.

     The max length of the strings is LEN, though they may be shorter so look
     for the string terminators.

     This function should return:
      -1 if string1 comes before string2 in alphabetical order
       0 if string1 is the same as string2
      +1 if string1 comes after string2 in alphabetical order

      Here, alphabetical order is defined simply by the numerical value
      of the characters in the string, from left to right.  See the writeup
      for more details.
  */
int string1dex = 0;
int string2dex = 0;
int i = 0;
int k = 0;

for( i = 0; i < LEN; i++){

    for( int k = 0; k < LEN; k++)
   {   
    if( ( isspace(string1[string1dex]) || ispunct(string1[string1dex]) )  )
    {
        string1dex++;
    }else 
        break;
   }
     for( int k = 0; k < LEN; k++)
   {   
    if( ( isspace(string2[string2dex]) || ispunct(string2[string2dex]) )  )
    {
        string2dex++;
    }else 
        break;
   }
  if(string1[string1dex] == '\n'&& string2[string2dex] != '\n'){
      return -1;
  }else if(string1[string1dex] != '\n'&& string2[string2dex] == '\n'){
      return 1;
  }else if(string1[string1dex] == '\n'&& string2[string2dex] == '\n'){
      return 0;
  }



     if (tolower(string1[string1dex]) == tolower(string2[string2dex]) ){
        string1dex++;
        string2dex++;
         continue;
   } else if (tolower(string1[string1dex]) > tolower(string2[string2dex]) ){
    return 1;
   }else{
       return -1;
   }

   
}

}








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

void my_swap_strings(char string1[LEN], char string2[LEN]) {
  char temp;    // char variable used in swapping one character at a time
  int length1 = strlen(string1);
  int length2 = strlen(string2);
  int i;
  if ( length2 > length1){
      length1 = length2;
  }// mind the max 
  /* Write code here to swap the contents of string1 and string2, one
     character at a time, WITHOUT USING ANY C STRING LIBRARY FUNCTIONS. 

     The max length of the strings is LEN, though they may be shorter, so look
     for the string terminators.
  */
  for( i = 0; i < length1; i++){
    temp = string1[i];
    string1[i] = string2[i];
    string2[i] = temp;
  }

}


int main()
{
  char strings[NUM][LEN];
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
   if( my_compare_strings(strings[j], strings[i]) == -1 ){
       my_swap_strings(strings[i], strings[j]);
   }
    }

  }
  
  puts("\nIn alphabetical order, the strings are:");     
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */
printString( strings );
}
