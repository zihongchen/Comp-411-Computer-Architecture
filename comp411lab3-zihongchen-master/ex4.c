/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>

int main()
{
  int A[3][3];    // matrix A     
  int B[3][3];    // matrix B
  int C[3][3];    // matrix to store their sum
  int i;
  printf("Please enter 9 values for matrix A:\n");
  for(  i = 0; i < 3; i++ )
 { 
       scanf("%d%d%d",&A[i][0],&A[i][1],&A[i][2]);
       C[i][0] = A[i][0];
       C[i][1] = A[i][1];
       C[i][2] = A[i][2];

  } 

  printf("Please enter 9 values for matrix B:\n");
  printf("C = B + A =\n");
  for(  i = 0; i < 3; i++ )
 {
       scanf("%d%d%d",&B[i][0],&B[i][1],&B[i][2]);
       C[i][0] += B[i][0];
       C[i][1] += B[i][1];
       C[i][2] += B[i][2];

  }
  for( i = 0; i < 3; i++ )
  {
    printf("%10d%10d%10d\n", C[i][0],C[i][1],C[i][2]);

  }

  
  
 }

