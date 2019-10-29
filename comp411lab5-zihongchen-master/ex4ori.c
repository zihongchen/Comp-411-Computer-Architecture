#include <stdio.h>

int A[1024];
int N;
int i;
int recursive(int A[], int n);
int main() {
	scanf("%d", &N);
    for(int i = 0; i < N; i++ ){
        A[i] = 0;
    }
   A[N] = '\0';
   i = N-1 
   recursive(A,i);
}

int recursive(int A[], int n){
printf("0");
recursive(n-1);


printf("1");
recursive(n-1);
}

