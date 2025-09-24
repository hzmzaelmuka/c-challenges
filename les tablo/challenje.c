#include <stdio.h>
int main(){         
    int tableau[5] ;
    int somme = 0 ;
     for(int i=0;i<5;i++){
printf("entre les 5 nombres ");

  scanf("%d",&tableau[i]);
}
    for ( int i = 0; i < 5; i++){
        somme += tableau[i];
    }
    
    
    printf("\nla some des nombre dun tablo  %d", somme);
    return 0;
}