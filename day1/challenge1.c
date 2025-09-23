#include <stdio.h>
int main (){
    char nom[100] , prenom[100] ,sex[100], email[100] ;
    int age ;
  printf("entre le nom :");
  scanf("%s",nom);
  printf("entre le prenom  :\n ");
  scanf("%s",prenom);
  printf("entre le sex :\n");
  scanf("%s",sex);
  printf("entre le lage :\n");
  scanf("%d",&age);
  printf("entre le email  :\n");
  scanf("%s",email);

printf("\n\nla nom :%s\nle prenom :%s\n le sex est :%s\n lage est :%d\n et la email est %s:" ,nom,prenom,sex,age,email);


}