#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int soma_numero(){
    int i,s=0,n,qtd;
    printf("Digite a quantodade de numeros:");
    scanf("%i",&qtd);
    for(i=1;i<=qtd;i++){
        printf("Digite o %i numero: ",i);
        scanf("%i",&n);
        s+=n;
    }
    printf("A soma ‚ %i",s);
    return 0;
}
int media_numeros(){
    int i,s=0,n,qtd;
    printf("Digite a quantidade de numeros:");
    scanf("%i",&qtd);
    for(i=1;i<=qtd;i++){
        printf("Digite o %i numero: ",i);
        scanf("%i",&n);
        s+=n;
    }
    printf("A media ‚ %.2f",(float)s/qtd);
    return 0;
}
int soma_sequencia(){
    int i,s=0,inicio,fim;
    printf("Digite o inicio:");
    scanf("%d",&inicio);
    printf("Digite o fim:");
    scanf("%d",&fim);
    if (inicio>fim){
        inicio=fim+inicio;
        fim=inicio-fim;
        inicio=inicio-fim;
    }
    for (i=inicio;i<=fim;i++){
        s+=i;
    }
    printf("A soma ‚ %d",s);
    return 0;
}
int contando_while(){
    int i=0,qtd;
    printf("Digite a quantidade de numeros:");
    scanf("%i",&qtd);
    while(i<=qtd){
        printf("%i\n",i);
        i++;
    }
    return 0;
}
int somando_while(){
    printf("Digite um numro para somar:\n");
    int s=0,i;
    scanf("%i",&i);
    while(i>=0){
        s+=i;
        printf("Digite outro numro para somar:\n");
        scanf("%i",&i);
    }
    printf("%d",s);
    return 0;
}
int media_while(){
    int s=0,n,qtd;
    qtd=-1;
    n=0;
    printf("Digite os numeros que quer calcular a media");
    while(n>0||qtd==-1){
        s+=n;
        qtd++;
        scanf("%i",&n);
    }
    printf("A media ‚ %.2f",(float)s/(qtd==0 ? 1: qtd));
    return 0;
}
int main(){
    //soma_numero();
    //media_numeros();
    //soma_sequencia();
    //contando_while();
    //somando_while();
    media_while();
    return 0;
}

