#include <stdio.h>
int main (){


    int  A ;
  printf("entre la note entre 1 et 20:");
  scanf("%d",&A);
  if(A<10){
      printf("echoc");
  }
      else if(A<=12){
      printf("passable");
      }else if(A<=15){
    printf("asses bien");
      }else if(A<=18){
       printf("bien");
      }else if(A<=20){
       printf("excellent");
}else 
printf("la note non valid");
        



return 0 ;                 
  

}





