#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	//Exemplo de como pode checar duas condi��es em uma mesma linha com o &&
	int n = 10; // Declara um valor a vari�vel n
	if((n % 2 == 0) && n < 20) /* Testa se o n�mero � par e se ele � menor do que 20
	� utilizado o && para mais de um argumento para checar */ 
	{ 
	 cout << "O numero e par e menor do que 20" << endl; // Imprime caso seja verdadeiro a condi��o
	}
	
    //O && s� permitir� que o cout imprima caso ambas condi��es sejam verdadeiras
    //Exemplo de como pode checar duas condi��es em uma mesma linha e imprimir caso uma seja verdadeira     
	int outro = 10; // Declara um valor a vari�vel outro
	if((outro % 2 == 0) || n < 20) /* Testa se o n�mero � par e se ele � menor do que 20
	� utilizado o || para mais de um argumento para checar e imprimir caso um seja  verdadeiro */ 
	{ 
	 cout << "Ou o numero e par ou e menor do que 20" << endl; // Imprime caso seja verdadeiro uma das condi��es
	}
	
	//Como testar o inverso de uma busca por n�mero par
	int impar = 11; // Declara um valor a vari�vel impar
	if(!(impar % 2 == 0)) // Testa se o n�mero � impar usando ! para negar o if
	{
		 cout << "O numero e impar" << endl; // Imprime caso o n�mero seja impar realmente
	}	
    

	return 0;
}