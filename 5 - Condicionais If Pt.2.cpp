#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	//Exemplo de como pode checar duas condições em uma mesma linha com o &&
	int n = 10; // Declara um valor a variável n
	if((n % 2 == 0) && n < 20) /* Testa se o número é par e se ele é menor do que 20
	É utilizado o && para mais de um argumento para checar */ 
	{ 
	 cout << "O numero e par e menor do que 20" << endl; // Imprime caso seja verdadeiro a condição
	}
	
    //O && só permitirá que o cout imprima caso ambas condições sejam verdadeiras
    //Exemplo de como pode checar duas condições em uma mesma linha e imprimir caso uma seja verdadeira     
	int outro = 10; // Declara um valor a variável outro
	if((outro % 2 == 0) || n < 20) /* Testa se o número é par e se ele é menor do que 20
	É utilizado o || para mais de um argumento para checar e imprimir caso um seja  verdadeiro */ 
	{ 
	 cout << "Ou o numero e par ou e menor do que 20" << endl; // Imprime caso seja verdadeiro uma das condições
	}
	
	//Como testar o inverso de uma busca por número par
	int impar = 11; // Declara um valor a variável impar
	if(!(impar % 2 == 0)) // Testa se o número é impar usando ! para negar o if
	{
		 cout << "O numero e impar" << endl; // Imprime caso o número seja impar realmente
	}	
    

	return 0;
}