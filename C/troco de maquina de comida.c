#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int troco(){
float valor,dinheiro,troco;
int escolha,n,resto,qtd;
printf("Digite a escolha desejada:\n 1) Batata - R$3,70\n 2) Suco - R$2,40\n 3) Grarana - R$1,75:\n");
scanf("%d",&escolha);
printf("Quantos Produtos?\n");
scanf("%d",&qtd);
if (escolha==1) {
    valor=3.7;
}
else if (escolha==2){
    valor=2.4;
}
else if (escolha==3){
    valor=1.75;
}
valor=valor*qtd;
printf("Entre com a quantidade de dinheiro: ");
scanf("%f",&dinheiro);
troco=dinheiro-valor;
printf("O troco ser  de R$%.2f\n",troco);
resto=troco*100;
n=resto/100;
resto=resto%100;
printf("%d notas de R$1,00\n",n);
n=resto/50;
resto=resto%50;
printf("%d notas de R$0,50\n",n);
n=resto/25;
resto=resto%25;
printf("%d notas de R$0,25\n",n);
n=resto/10;
resto=resto%10;
printf("%d notas de R$0,10\n",n);
n=resto/5;
resto=resto%5;
printf("%d notas de R$0,05\n",n);
n=resto/1;
printf("%d notas de R$0,01\n",n);
return 0;
}

int main(){
    troco();
    return 0;
}
