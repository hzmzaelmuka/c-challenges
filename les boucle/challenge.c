#include<stdio.h>
int main(){
    int i ,N ,A ;
    printf("entre un nombre positiv pour calcule la somme ");
    scanf("%d",&N);
    i=0;
    A=0;
    while(i<=N){
       A=A+i ;
       i++;

}
printf("la somme des nombre jusca N est :%d",A);
return 0 ;
}