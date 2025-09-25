#include <stdio.h>
int main(){      
    int B ;
    printf("entre la tail de tablo")   ;
    scanf("%d",&B);

    int  T[B] ,A[B] ;
    for(int i=0;i<B  ;i++){
   printf("antre le nombre ");
   scanf("%d",&T[i]);
     A[B-i-1]=T[i];
    } for(int i=0 ; i<B ;i++){
    
    printf("%d   ",A[i]);
}
    return 0 ;
}


