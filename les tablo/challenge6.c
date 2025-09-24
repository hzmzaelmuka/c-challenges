#include <stdio.h>
int main(){         
    int  T[100],TA[100] ,A,B;
    
    printf("entre le nombre de multiple");
    scanf("%d",&A);
     printf("\nentre le nombre de cheffre pour calcule le multiple");
    scanf("%d",&B);
    for(int i=0;i<B;i++){
    printf("\nentre le %d cheffre ",i+1);
   scanf("%d",&T[i]);
TA[i]=T[i]*A;
    }
    for(int i=0;i<B;i++){
    printf("    %d",TA[i]);

    }

    return 0;
}