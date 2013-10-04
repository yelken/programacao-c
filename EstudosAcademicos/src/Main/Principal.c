#include<stdio.h>
#include <stdlib.h>
#include"../Math/CalculoMedia.h"
#include"../Math/Calculadora.h"
#include"../Math/Equacoes.h"
#include"../Math/Fatorial.h"
#include"../Math/ImcUtils.h"
#include"../Math/Tabuada.h"
#include"../Desafios/Desafio1.h"
#include"../Desafios/Desafio2.h"


// scanf tem pelo menos dois parametros
// primeiro parametro: o tipo de variavel da leitura
// %d - inteiro 
// %f - float
// %lf - double 
// %c - char
// %s - string
// Segundo parametro - o enderecos das variaveis de leitura comecando atraves do &

int main(){
	
	int numero;
	printf("Digite o numero: \n");
	scanf("%d", &numero);
	
	bool retorno;
	
	retorno = isNumeroPalindrome(numero);
	
	if (retorno == true) {
		printf("Número palindrome \n");
		printf("Soma: %d", operacaoNumeros(numero, soma));
	} else {
		printf("Não é Número palindrome \n");
		printf("Multiplicação: %d", operacaoNumeros(numero, produto));
	}				
		
	return 0;
}