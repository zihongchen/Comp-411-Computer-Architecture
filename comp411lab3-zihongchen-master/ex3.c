/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reverse[MAX];
  int i = 0;
  int length,lengthCp;
  int count = 0;
  int reverseIndex = 0;
  int textIndex = 0;  
  puts("Type some text (then ENTER):");
  
  /* Save typed characters in text[]: */
  fgets(text, MAX, stdin);  
  length = strlen(text)-1;// since the fget will include a "/n";
  lengthCp = length-1;
  /* Analyse contents of text[]: */

  puts("Your input in reverse is:");  
  for (i =  0; i < length; i++)
  {
    int temp = lengthCp - i;// dude, please just declare the variable before using them;!!!!!!!!
    reverse[i] = text[temp];
    if(i == lengthCp){reverse[i+1] = '\0';}// adding the null terminator; you have to add this manually if you choose to determine the array this way;
  }
  for (i =  0; i < length; i++)
  {
  printf("%c",reverse[i]);
  }
  printf("\n");
  // to see if it repeats. first ignore space and puncturation
  for(i = 0; i < MAX; i++)
  {
   for( int k = 0; k < MAX; k++)
   {   
    if( ( isspace(reverse[reverseIndex]) || ispunct(reverse[reverseIndex]) )  )
    {
        reverseIndex++;
        break;
    }
   }
   
   for( int k = 0; k < MAX; k++)
   { if( ( isspace(text[textIndex]) || ispunct(text[textIndex]) )  )
    {
        textIndex++;
        break;
    }
   }
    if(reverseIndex == length || textIndex == length) 
    { 
        break;
    }
      if(reverse[reverseIndex] == text[textIndex]) {
         count++;           
      }else if(tolower(reverse[reverseIndex]) == text[textIndex])
      {
         count++; 
      }else if(toupper(reverse[reverseIndex]) == text[textIndex])
      {                              
            count++;  
       }else{ 
           count = 0;
           break;
             }


  }




  if(count != 0)
  {  
     puts("Found a palindrome!");  
  }
 
}



