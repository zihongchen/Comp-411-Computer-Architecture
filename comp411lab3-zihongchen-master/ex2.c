/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reverse[MAX];
  int i = 0;
  int length,lengthCp;
  int count = 0;

  puts("Type some text (then ENTER):");
  
  /* Save typed characters in text[]: */
  fgets(text, MAX, stdin);  
  length = strlen(text)-1;// since the fget will include a "/n";
  lengthCp = length-1;
  /* Analyse contents of text[]: */
  puts("Your input in reverse is:");  
  for (i =  0; i < length; i++)
  {
    int temp = lengthCp - i;
    reverse[i] = text[temp];
    if(reverse[i] == text[i]){
        count++;
    }
    if(i == lengthCp){reverse[i+1] = '\0';}// adding the null terminator; you have to add this manually if you choose to determine the array this way;
  }
  for (i =  0; i < length; i++)
  {
  printf("%c",reverse[i]);
  }
  printf("\n");
  if(count == length)
  {  
     puts("Found a palindrome!");  
  }

}

