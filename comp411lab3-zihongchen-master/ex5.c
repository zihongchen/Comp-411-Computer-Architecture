#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  char buf[MAX_BUF];
  int length;
  int i;
  do {
  fgets(buf, MAX_BUF, stdin);  
  length = strlen(buf)-1;
  for( i = 0; i < length; i ++)
  {
      if(buf[i] == 'e' || buf[i] == 'E'){buf[i] ='3';} 
      if(buf[i] == 'i' || buf[i] == 'I'){buf[i] = '1';} 
      if(buf[i] == 'o' || buf[i] == 'O'){buf[i] = '0';} 
      if(buf[i] == 's' || buf[i] == 'S'){buf[i] = '5';} 
  }
  for( i = 0; i < length; i ++)
  {
   // if( buf[i] >= 0 && buf[i] <= 9 ){
   // printf("%d", buf[i]);
   // }else this will also solve the problem. store a decimal in the char and print 3 instead of "3", which is 51;
   // {
    printf("%c", buf[i]);
     //}
    if(i == length - 1){ printf("\n");}
  }
  } while (length >= 1);
}
