#include <iostream>

using namespace std; 

int main()
{
    //Exemplo de uma soma
	int n1, n2, resultado; // Declara as tres variaveis
	n1 = 10; // Declara um valor a n1 
	n2= 20;	// Delara um valor a n2
	resultado = n1 + n2; // Define o valor do resultado
	cout << resultado << endl; //Irá imprimir a soma de n1 + n2
	
	//Exemplo de uma subtracao
	int n3, n4, subtracao; // Declara as tres variaveis
	n3 = 6; // Declara um valor a n3 
	n4 = 2; // Declara um valor a n4 
	subtracao = n3 - n4; // Define o valor da variavel subtracao
	cout << subtracao << endl; // Imprimir o resultado da variavel subtracao
	
	// Exemplo abaixo de uma multiplicaçao 
	int n5, n6, multiplicacao; // Declara as tres variaveis 
	n5 = 2; // Declara o valor a n5
	n6 = 10; // Declara o valor a n6 
	multiplicacao = n5 * n6; // Declara que o valor de multiplicacao sera o resultado da multiplicao
	cout << multiplicacao << endl; // Imprime o resultado da multiplicacao
	
	// Exemplo abaixo de uma divisao de numero inteiro 
	int n7, n8, divisao; // Declara as tres variaveis 
	n7 = 100; // Declara o valor a n7
	n8 = 10; // Declara o valor a n8 
	divisao = n7 / n8; // Declara que o valor de divisao sera o resultado da divisao
	cout << divisao << endl; // Imprime o resultado da divisao
	
	// Exemplo abaixo de uma divisao de numero quebrado  
	int n9, n10; // Declara os dois numeros das variaveis inteiros
	float quebrado; // Declara que o resultado deve ser quebrado
	n9 = 10; // Declara o valor de n9
	n10 = 20; // Declara o valor de n10 
	quebrado = (float)n9 / n10; /* Utiliza-se o (float) de forma explicita para definir que a 
	variavel n9 deve ser tratada como um numero quebrado enquanto a n10 um inteiro */
	cout << quebrado << endl; // Imprime o valor quebrado da divisao
	
	// Exemplo abaixo do resto da divisao 
	int n11, n12, resto; // Declara as tres variaveis 
	n11 = 20; // Declara o valor de n11
	n12 = 10; // Declara o valor de n12
	resto = n12 % n11; // Declara o resultado de resto da divisao
	cout << resto << endl; // Imprime o valor do resto da divisao
	
	// Operador Unário de incremento
	int n; // Declara a variavel n
	n = 10; // Declara um valor para n 
	n++; // Esse ++ ira somar + 1 e igual a (n = n + 1;) ou   
	cout << n << endl; // Imprimindo o valor de n 
	
	// Operador Unário de decremento
	int m; // Declara a variavel m
	m = 10; // Declara um valor para m 
	m--; // Esse -- ira subtrair + 1 e igual a (n = n - 1;) ou 
	cout <<  m << endl; // Imprimindo o valor de m 
	
	/* Ou podendo fazer de forma direta para uma variavel
	(n ++ 1;) Soma 
	(n -= 1;) Subtracao
	(n *= 1;) Multiplicao
	(n /= 1;) Divisao
	*/
	
	// Forma como os sinais sao escolhidos na prioridade primeiro multiplicacao e divisao
	int a; // Declaramos a variavel a 
	a = 100 + 20 / 2; // O primeiro resultado sera 10 pois a divisao vira primeiro
	cout << a << endl; // Imprimindo o valor 110 apos a divisao sera a soma 100 + 10 
	
	//Para obigar a efetuar o calculo com os sinais que voce quer
    int b; // Declaramos a variavel b 
	b = (100 + 20) / 2; // O primeiro resultado sera 120 pois a soma vira primeiro devido os parenteses
	cout << b << endl; // Imprimindo o valor 60 apos a soma sera feita a divisao por 2
	
	return 0;
}