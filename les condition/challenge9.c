#include<stdio.h>
int main(){
int max ,min ,A,B;
printf("entre doux nombre");
scanf("%d%d",&A,&B);

    if(B*A>0)
    printf("les deux nombre meme signe");
else
    printf("les deux nombre de signe deferont");

    if(A>B){
        min=B;
    
     max=A ;}


 else{
 max=B;
  min=A;
 }
printf("\nle nd maximum est %d",min);

printf("\nle nb maximum est %d",max);


return 0;
}