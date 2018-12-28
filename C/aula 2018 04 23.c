/*
 * aula 2018 04 23.c
 * 
 * Copyright 2018 erica <erica@DESKTOP-26LJ18D>
 * 
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265 // define uma constante

void exemplo1(){
  int x=0;
  scanf("%d",&x);
  printf("%d",x);
  //return 1;
}
int media_nota(){
	float n1,n2,m;
	printf("Digite a nota 1:");
	scanf("%f",&n1);
	printf("Digite a nota 2:");
	scanf("%f",&n2);
	m=(n1+n2)/2;
	printf("A media entre %.2f e %.2f ‚: %.2f",n1,n2,m);
	return (0);
}
int media_unesc(){
	float p1,p2,te,tp,media;
	printf("Digite a nota da P1:");
	scanf("%f",&p1);
	printf("Digite a nota da P2:");
	scanf("%f",&p2);
	printf("Digite a nota do TE:");
	scanf("%f",&te);
	printf("Digite a nota do TP:");
	scanf("%f",&tp);
	media= (p1*3+p2*3+te+tp*3)/10;
	printf("A m‚dia do aluno ‚: %2.2f",media);
	return (0);
}
int imc(){
  float peso,altura,indice;
  printf("Digite seu peso em kg:");
  scanf("%f",&peso);
  printf("Digite sua altura em cm:");
  scanf("%f",&altura);
  indice=((peso)/((altura/100)*altura/100));
  printf("O seu IMC ‚: %.2f",indice);
  return (0);
}
int calc_area_circ(){
	int raio;
	float area;
	printf("Digite o raio em cm: ");
	scanf("%i",&raio);
	area=PI*raio*raio;
	printf("A area da cricunferencia de raio %icm ‚ %.4fcm2",raio,area);
	return (0);


}
int media_condicional_aprovado(){
	float n1,n2,m;
	printf("Digite a nota 1:");
	scanf("%f",&n1);
	printf("Digite a nota 2:");
	scanf("%f",&n2);
	m=(n1+n2)/2;
	printf("A media ‚: %.2f\n",m);
	if (m>=7.0){
		printf("Aprovado");	
	}
	else{
		printf("Reprovado");
	}
	return(0);
}
int ordem_crescente(){
	int a,b;
	printf("Digite a numero 1:");
	scanf("%i",&a);
	printf("Digite a numero 2:");
	scanf("%i",&b);
	if (a<b){
		printf("%i ; %i",a,b);	
	}
	else{
		printf("%i ; %i",b,a);
	}
	return(0);
}
int main() {
  //imc();
  //media_unesc();
  //exemplo1();
  //media_nota();
  //calc_area_circ();
  //media_condicional_aprovado();
  //ordem_crescente();
  return 0;
}
