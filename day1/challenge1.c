#include <stdio.h>
int main (){
    char nom[100] , prenom[100] ,sex[100], email[100] ;
    int age ;
  printf("entre le nom :");
  scanf("%s",nom);
  printf("\n entre le prenom  : ");
  scanf("%s",prenom);
  printf("\nentre le sex M ou F :");
  scanf("%s",sex);
  printf("\nentre le lage  :");
  scanf("%d",&age);
  printf("\nentre le email  :");
  scanf("%s",email);

printf("\n\nla nom :%s\nle prenom :%s\n le sex est :%s\nlage est :%d\nle email est %s:" ,nom,prenom,sex,age,email);


}