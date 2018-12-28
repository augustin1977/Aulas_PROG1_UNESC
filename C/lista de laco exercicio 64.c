#include <stdio.h>
int main()
{	int n,i;
    n=1;
    i=0;
    while(n>0){
		printf("Digite um numero:");
		scanf("%i",&n);
		if ((n>100) && (n<200)) i++;	
	}
printf("Foram digitados %i numeros entre 100 e 200!",i);
}
