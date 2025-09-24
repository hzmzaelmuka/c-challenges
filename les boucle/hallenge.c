#include<stdio.h>
int main(){
    int N=42 ,A ;
    do{
        printf("\nentre un nombre qui propose la nombre ");
         scanf("%d",&A);
       if(A>N)
           printf("\nle nombre trop grand");
        else if (A<N)
        printf("\nle nombre et trop petit");

    }while(A!=N);
    printf("pravo cest correct");


    return 0 ;
}