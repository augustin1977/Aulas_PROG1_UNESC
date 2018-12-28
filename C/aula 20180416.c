/*
 * aula 20180416.c
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

int media()
{
float n1,n2,m;
scanf("%f",&n1);
scanf("%f",&n2);
m=(n1+n2)/2;
printf("%f",m);
return 0;
}

int leitura()
{
	int x =0;
	scanf("%i",&x);
	printf("%i",x);
	return 0;
}

int main()
{
	printf("Digite duas notas\n");
	media();
	printf("\nDigite um numero\n");
	leitura();
}
