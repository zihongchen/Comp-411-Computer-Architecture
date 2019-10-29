/*:wq:wq
 * Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <ctype.h>






int NchooseK(int n, int k ){
if( k == 0 ){
    return 1;
}else if (k == n){
    return 1;
}else return NchooseK(n-1, k-1)+ NchooseK(n-1, k);

}

int main()
{
  int n;
  int k;
  int result;
  int sb = 1;
 while( sb = 1){
 printf("Enter two integers (for n and k) separated by space:\n");
 scanf("%d %d", &n, &k);
 
 result = NchooseK(n,k);
 
 printf("%d\n", result);

 if( n ==0 && k == 0){
     break;
 }
 
 
 }
}
