#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )	
{
	int i;
	clock_t tempo;
	
// Laço com while//
	i=1;
	tempo=clock();
	while(i<=10){
		printf("%i x 2 = %i\n",i,i*2);
		i++;
	}
	
// laço com for//

	printf("-----------\n");
    for(i=1;i<=10;i++){
		printf("%i x 2 = %i\n",i,i*2);
	}
	printf("%f\n",((double)(clock()-tempo)));
    return 0;
}

