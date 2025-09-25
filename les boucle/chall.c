#include<stdio.h>
int main(){
    int A=125 ,N;
    float B=0   ;
    printf("entre le de nombre dun produit");
    scanf("%d",&N);
    if(N>0){
       for(int i=0;i<N;i++){
            B=B+A-A*(0.02*i);
          
        }}
    
    printf("prix de produit est %.2f",B);



    return 0;
}