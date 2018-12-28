#include <stdio.h>
#include <stdlib.h>
int main(){
int a,b,c;
a=1;
b=2;
c=b+2;
printf("%d %d %d\n",a,b,c);
while(c<1000){
    printf("%d\n",c);
    c++;
}
}
