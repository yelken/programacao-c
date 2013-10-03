#include<stdio.h>
#include <stdlib.h>
#include"../Math/CalculoMedia.h"
#include"../Math/Calculadora.h"
#include"../Math/Equacoes.h"
#include"../Math/Fatorial.h"
#include"../Math/ImcUtils.h"
#include"../Math/Tabuada.h"
#include"../Desafios/Desafio1.h"


// scanf tem pelo menos dois parametros
// primeiro parametro: o tipo de variavel da leitura
// %d - inteiro 
// %f - float
// %lf - double 
// %c - char
// %s - string
// Segundo parametro - o enderecos das variaveis de leitura comecando atraves do &

int main(){
	float massa, altura;
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	printf("Digite a sua massa: ");
	scanf("%f", &massa);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("%f", calculoConsulta(idade, massa, altura));
	
	return 0;
}