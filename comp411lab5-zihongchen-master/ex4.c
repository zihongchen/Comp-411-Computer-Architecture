#include <stdio.h>


int N;
int i;
int j;
int powerofN;
int A[1024];
int recursive(int n);
int power(int n );

int main() {
    powerofN = 1;
	scanf("%d", &N);
    powerofN = power(N);

    for(int i = 0; i < powerofN; i++ ){
      j = 0;
       recursive( i );
       for( int k = N-1; k >= 0; k--){
       printf("%d",A[k]);
       }
       printf("\n");
    }
    
   
}

int recursive(int n){
    if( n == 0 ){
        return 0;
    }
    int result = n / 2;
    int mod = n % 2;
    if( n == 0 ){
        return 0;
    }
    A[j] = mod;
    j++;
    recursive(result);
    ;// the time it prints
}
int complete(int n){
    if( n != N -1){
        for(int t = n; t < N; t++){
           A[t] = 0; 
    }

}

}
int power(int n){
    
    if( n > 0 ){
        n--;
        powerofN *= 2;
        power(n);
    }else 
        return powerofN;

    
}

