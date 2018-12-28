/*
 * aula 2018 05 07.c
 *
 * Copyright 2018 erica <erica@DESKTOP-26LJ18D>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265 // define uma constante

int verifica_triangulo(){
    int a,b,c;
    char saida;
    saida='S';
    while((saida=='S') || (saida=='s')){
        printf("Digite o primeiro lado: ");
        scanf("%d",&a);
        printf("Digite o segundo lado: ");
        scanf("%d",&b);
        printf("Digite o terceiro lado: ");
        scanf("%d",&c);
        if ((a<=b+c)&&(b<=a+c)&&(c<=a+b)) {
            printf(" um trinagulo");
        }
        else {
            printf("NÆo ‚ um trinagulo");
        }
        printf("\nDeseja continuar (S/N)?");
        scanf("%s",&saida);
    }
return 0;
}
int codigo_mercado(){
    int cod;
    printf("Digite o codigo: \n 1-Alimentos\n 2-Bebidas\n 3-Limpeza\n");
    scanf("%i",&cod);
    if (cod==1) printf("Alimentos");
    else if (cod==2) printf("Bebidas");
    else if (cod==3) printf("Limpeza");
    return 0;
}
int idade_natacao(){
    int idade;
    printf("Digite a idade do nadador:");
    scanf("%d",&idade);
    if (idade>=18) printf("Sˆnior");
    else if (idade>=14) printf("Juvenil B");
    else if (idade>=11) printf("Juvenil A");
    else if (idade>=8) printf("Infantil B");
    else if (idade>=5) printf("Infantil A");
    return 0;
}
int conceito_nota(){
    char conceito;
    float media,nota1,nota2,nota3,nota_exe;
    printf("Digite a nota da Primeira prova: ");
    scanf("%f",&nota1);
    printf("Digite a nota da Segunda prova: ");
    scanf("%f",&nota2);
    printf("Digite a nota da Terceira prova: ");
    scanf("%f",&nota3);
    printf("Digite a m‚dia dos execercicios: ");
    scanf("%f",&nota_exe);
    media=(nota1+(2.0*nota2)+(3.0*nota3)+nota_exe)/7;
    if (media<4.0) conceito='E';
    else if (media<=6.0) conceito='D';
    else if (media<=7.5) conceito='C';
    else if (media<=9.0) conceito='B';
    else conceito='A';
    if (conceito=='A' || conceito=='B' || conceito=='C')
            printf("O Aluno foi APROVADO com nota %.2f com conceito %c",media,conceito);
    else printf("O Aluno foi REPROVADO com nota %.2f com conceito %c",
            media,conceito);
    return 0;
}
int exemplo_for(){
    int i;
    for (i=1;i<=100;i+=2){
        printf("%d\n",i);
    }
    return 0;
}
int raizes(){
    int i;
    for (i=1;i<=1000;i++){
        printf("%i => %f\n",i, sqrt(i));
    }
    return 0;
}
int main() {
//verifica_triangulo();
//codigo_mercado();
//idade_natacao();
//conceito_nota();
//exemplo_for();
raizes();
  return 0;
}


