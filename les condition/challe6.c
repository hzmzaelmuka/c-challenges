#include<stdio.h>
int main (){
     int A ;
     float B , C ;
     int X ,D;
     printf("entre lage de conducteure ");
     scanf("%d",&A);

     C= 60;
     if(A<25){
     C=C*1.5 ;
     }else if(A<=65){
     C=C ;
     }else if(A>65){
     C=C*1.2;

      }else{
      printf("lage nepas valide entre outre lage") ;

      }

      printf(" par quel type de voiture entre un nombre\n 1:pour type sportive \n 2:pour type utilitaire \n 3: por typ familiale \n ");
      scanf("%d",&X);
      switch(X){
         case 1: C=C*2;
                break;
          case 2: C=C*1.2;
                break;
          case 3: C=C*1.1;

                break;
          default :printf("le nomre de type non valide entre outre nombre ");

           break;}
        printf(" entre le nombre daccidente");
        scanf("%d",&D);

     if(D>1){
     C=C*0.3;

     }
     printf("\n\nle prime  dassurance est : %.2f dh",C);




     return 0;
     }