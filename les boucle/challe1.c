#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int N ,i;
    do{
		printf("entre un nombre entie entre 1 et 10");
	scanf("%d",&N);

	}while(N<1||N>10);

	for(i=1;i<=10;i++)
		printf("%d*%d=%d\n",N,i,N*i);




	return 0;
}