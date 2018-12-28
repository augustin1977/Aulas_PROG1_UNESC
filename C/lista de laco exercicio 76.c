#include <stdio.h>
int main()
{	int n,soma,produto;
    n=1;
    soma=0;
    produto=1;
    while(n>0){
		printf("Digite um numero:");
		scanf("%i",&n);
		if (n%2==1) produto=produto*n;
		else soma=soma+n;
	}
printf("produto: %d\n soma:%d\n ",produto,soma);
}
