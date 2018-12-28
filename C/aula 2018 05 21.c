#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int exe1(){
int a,b;
printf("Digite o valor de a:");
scanf("%d",&a);
printf("Digite o valor de b:");
scanf("%d",&b);
printf("Soma=%d\nSubtraá∆o=%d\nMultiplicaá∆o=%d\nDivis∆o=%f\n",a+b,a-b,a*b,(a+0.0)/b);
return 0;
}
int exe2(){
float tempc,tempf;
printf("Digite a temperatura que deseja converter para Farenheit: ");
scanf("%f",&tempc);
tempf=(9*tempc+160)/5;
printf("A temperatura de %.2f Celcius = %.2f Farenheit",tempc,tempf);
return 0;

}

int exe3(){
float pvenda,pcusto,p;
printf("Digite o valor de custo do produto: ");
scanf("%f",&pcusto);
printf("Digite o porcentual de reajuste em %%: ");
scanf("%f",&p);
pvenda=pcusto*(1+(p/100));
printf("O preáo do produto , de R$%.2f",pvenda);
return 0;
}
int exe4(){
int n;
printf("Digite um valor: ");
scanf("%d",&n);
if ((n>100) && (n<200)){
     printf("o numero %d esta em 100 e 200!",n);
 }
 else{
     printf("o numero %d nío esta em 100 e 200!",n);
 }
 return 0;
}
#define max 80
int exe5(){
int n,i,entra;
for (i=0;i<max;i++){
    printf("Digite valor: ");
    scanf("%d",&entra);
    if ((entra>=10) && (entra<=150)){
        n++;
    }
}
printf("%d estío em 10 e 150!",n);

 return 0;
}

int exe6(){
int n,i,idade,saude, apto;
//char nome [100];
char sexo;
printf("Digite o numero de pessoas que se alistaram no exercito: ");
scanf("%d",&n);
apto=0;
for (i=0;i<n;i++){
    //printf("Digite o nome do %dõ candidato :\n",i);
    //scanf("%s", &nome);
    printf("Digite o sexo do candidato: (M/F)\n");
    scanf(" %c",&sexo);
    printf("Digite a idade do candidato: \n");
    scanf("%d",&idade);
    printf("Digite o estado de saude do candidato: (0=Apto/1=Inapto)\n");
    scanf("%d",&saude);
    if ((idade>=18)&&((sexo=='M')||(sexo=='m'))&&(saude==0)){
        apto++;
        }
    }
    printf("De %d candidatos temos %d aptos",n,apto);
return 0;
}
int exe7(){
int n;
printf("Digite um numero: ");
scanf("%d",&n);
if (n==1) printf("um");
else if (n==2) printf("Dois");
else if (n==3) printf("Tres");
else if (n==4) printf("Quatro");
else if (n==5) printf("Cinco");
else printf("Numero fora do intervalo");
return 0;
}
#define maxfunc 5
int exe8(){
    int n;
    float sal, salmin,folhav=0,folhan=0;
    printf("Digite o valor do salario minimo: ");
    scanf("%f",&salmin);
    for(n=0;n<maxfunc;n++){
        printf("Digite o salario:");
        scanf("%f",&sal);
        folhav+=sal;
        if (sal<3*salmin) sal=sal*1.5;
        else if (sal<10*salmin) sal=sal*1.2;
        else if (sal<20*salmin) sal=sal*1.15;
        else sal=sal*1.1;
        folhan+=sal;
        printf("O novo salario , de R$%.2f\n",sal);
    }
    printf("O aumento de folha foi de %.2f\n",folhan-folhav);
    return 0;
}
int exe9(){
    int i,n,raiz=0;
    printf("Digite o numero que deseja testar:");
    scanf("%d",&n);
    for (i=0;i<n/2;i++){
        if (n==(i*i)) raiz=i;
    }
    if (raiz==0) printf("%d n∆o Ç um quadrado perfeito",n);
    else printf("%d , Ç um quadarado perfeito cuja raiz , %d",n,raiz);
    return 0;
}
int exe10(){
    int tipo;
    float conta,consumo,tarifa,taxa;
    printf("Digite o tipo de consumidor \n1=residencial\n2=comercial\n3=industrial\n");
    scanf("%d",&tipo);
    printf("Digite o consumo do cliente:\n");
    scanf("%f",&consumo);
    if (tipo==1) {
        tarifa=0.05;
        taxa=5;
        conta=consumo*tarifa+taxa;
    }
    else if (tipo==2){
        tarifa=0.25;
        taxa=500;
        if (consumo>80) {
            conta=((consumo-80)*tarifa)+taxa;
        }
        else {
            conta=taxa;
        }
    }
    else if (tipo==3){
        tarifa=0.04;
        taxa=800;
        if (consumo>100) conta=(tarifa*(consumo-100))+taxa;
        else conta=taxa;
    }
    printf("A conta ficou em R$%.2f",conta);
    return 0;
}


int exe11(){
    int dia,mes,ano, valido=0;
    printf("Programa de validaá∆o de datas:\nDigite o dia:");
    scanf("%d",&dia);
    printf("Digite o màs:");
    scanf("%d",&mes);
    printf("Digite o ano:");
    scanf("%d",&ano);
    if (dia<=31 && mes<=12){
        if (mes==1 || mes==3|| mes==5 || mes==7|| mes==8 || mes==10 || mes==12){
            valido=1;
        }
        else if (dia<31&&(mes==4 || mes==6 || mes==9||mes==11)){
            valido=1;
        }
        else if (dia<30 && mes==2 &&(ano>1752 && ano%4==0 &&((ano%100!=0)||(ano%400==0)))){
            valido=1;
        }
    }
    if (valido==1) printf("Data v†lida");
    else printf("data invalida");
    return 0;
}

int exe12(){
    int ano;
    printf("Digite o ano que deseja saber se , bissexto: ");
    scanf("%i",&ano);
    if (ano>1752 && ano%4==0 &&((ano%100!=0)||(ano%400==0))){
        printf("%d , ano bisexto",ano);
    }
    else{
        printf("%d n∆o , Bisexto",ano);
    }
    return 0;
}
int exe13(){
    int idade;
    printf("Digite a idade do cidadío: ");
    scanf("%d",&idade);
    if (idade<16) printf("N∆o eleitor");
    else if (idade<18 || idade>=65) printf("Eleitor facultativo!");
    else printf("Eleitor obrigatΩrio!");
    return 0;
}
 int exe14(){
     int num,maximo;
     printf("Digite um numero:");
     scanf("%d",&num);
     maximo=num;
     while(num!=-9999){
        printf("Digite outro numero:");
        scanf("%d",&num);
        if (num>maximo) maximo=num;
     }
     if (maximo!=-9999) printf("O maior numero digitado foi %d!",maximo);
     else printf("Nenhum numero foi digitado");
     return 0;
 }

int exe15(){
    int menos21=0,mais50=0,n=0;
    while(n>=0){
        printf("Digite a idade:");
        scanf("%d",&n);
        if (n>50) mais50++;
        else if (n<21&&n>=0) menos21++;
    }
    printf("Foram digitados %d idades maiores que 50 anos e %d idades menores de 21 anos!",mais50,menos21);
    return 0;

}
int exe16(){
    char sexo='M';
    int i=0,idade;
    float peso,altura,ma=0,fp=0,mi=0;
        printf("Entre com o cadastro do atleta:\n");
        while (sexo!='@'){
            printf("Entre com o sexo do candidato (M/F) ou @ para terminar:\n");
            scanf(" %c",&sexo);
            if (sexo!='@'){
                i++;
                printf("Digite o idade do atleta %d :\n",i);
                scanf("%d",&idade);
                mi+=idade;
                printf("Digite o peso do atleta:\n");
                scanf("%f",&peso);
                printf("Digite a altura do atleta:\n");
                scanf("%f",&altura);
                if ((sexo=='m' || sexo=='M')&& (altura>ma||i==1)){
                    ma=altura;
                }
                if ((sexo=='f' || sexo=='F')&& (peso>fp||i==1)){
                    fp=peso;
                }

            }

        }
        printf("%f %d \n",mi,i);
        if (i>0) mi=mi/i;
        printf("Atleta masculino mais alto tem %.2f\n",ma);
        printf("Atleta feminino mais pesado tem %.2f\n",fp);
        printf("Atleta media das idades %.2f",mi);
        return 0;

}

int exe17(){
    int maior,menor,n,cont=0;
    float media=0.0;
    printf("Digite um numero: ");
    scanf("%d",&n);
    maior=n;
    menor=n;
    while(n!=0){
        cont++;
        if (n>maior) maior=n;
        else if (n<menor) menor=n;
        media+=n;
        printf("Digite um numero: ");
        scanf("%d",&n);
    }
    if (cont==0) media=0.0;
    else media=media/cont;
    printf("O %d foi o maior numero digitado!\n",maior);
    printf("O %d foi o menor numero digitado!\n",menor);
    printf("O %.2f foi o media dos numeros digitados!\n",media);
    return 0;
}
int exe18(){
    int nimp=0,npar=0,imp=1,par=0,n;
    do {
        printf("Digite um numero:\n");
        scanf("%d",&n);
        if (n>0){
            if ((n%2==0)&&(n>0)) {
                par+=n;
                npar++;
            }
            else {
                nimp++;
                imp*=n;
            }
        }
    } while(n>0);
    if (nimp!=0) printf("O produto dos impares Ç %d\n",imp);
    if (npar!=0) printf("A soma dos pares Ç %d\n",par);

    return 0;
}
int exe19(){
    int nimp=0,npar=0,imp=0,par=0,n;
    do {
        printf("Digite um numero:\n");
        scanf("%d",&n);
        if (n>=0){
            if ((n%2==0)&&(n>=0)) {
                par+=n;
                npar++;
            }
            else {
                nimp++;
                imp+=n;
            }
        }
    } while(n>=0);
    if (nimp!=0) printf("O media dos impares Ç %.2f\n",(float)imp/nimp);
    if (npar!=0) printf("A media dos pares Ç %.2f\n",(float)par/npar);

    return 0;
}
int exe20(){
    int fichas,sexo,i,im=0;
    float altura, maioraltura,menoraltura,somaaltura=0,somaaltmulher;
    printf("Digite o numero de fichas");
    scanf("%d",&fichas);
    for(i=0;i<fichas;i++){
        printf("Digite a altura:\n");
        scanf("%f",&altura);
        printf("Digite o sexo (1=homem,2=mulher)\n");
        scanf("%d",&sexo);
        if (sexo==2){
            im++;
            somaaltmulher+=altura;
        }
        somaaltura+=altura;
        if (i==0){
            maioraltura=altura;
            menoraltura=altura;
        }
        else if (altura>maioraltura) maioraltura=altura;
        else if (altura<menoraltura) menoraltura=altura;
    }
    printf("A pessoa mais alta tem %.2fm\n",maioraltura);
    printf("A pessoa mais baixa tem %.2fm\n",menoraltura);
    printf("A media das alturas das mulheres %.2fm\n",somaaltmulher/im);
    printf("A media das alturas das mulheres %.2fm\n",somaaltura/fichas);


    return 0;
}

int exe9v2(){
    int n, raiz;
    scanf("%d",&n);
    raiz=(int) sqrt(n);
    if (raiz*raiz==n) printf("Raiz perfeita");
    else printf("N∆o Ç raiz perfeita");
    return 0;
}
int main(){
    //exe1();
    //exe2();
    //exe3();
    //exe4();
    //exe5();
    //exe6();
    //exe7();
    //exe8();
    //exe9();
    //exe9v2();
    //exe10();
    //exe11();
    //exe12();
    //exe13();
    //exe14();
    //exe15();
    //exe16();
    //exe17();
    //exe18();
    //exe19();
    //exe20();
return 0;
}
