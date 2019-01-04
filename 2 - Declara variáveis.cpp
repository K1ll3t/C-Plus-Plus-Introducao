#include <iostream>

using namespace std;

int main () 
{
	int  idade, idade2, idade3; // declarar várias variáveis em uma linha única
	int  Idade; // Uma outra variável com diferença apenas de 1 caractere maiúsculo

	
	idade = 20; // Declarando um número a idade
	cout << idade << endl;  // Imprimindo o valor da idade e utilizando o endl para uma quebra de linha 
    
    float pi = 3.14; // Declara a variável pi o valor "quebrado"
    cout << pi << endl; // Imprimindo o valor de pi 
    
    double pi_extendido = 3.1415; // O double diferencia do float pois calcula com mais precisao numero grandes
    cout << pi_extendido << endl; 
    
    string mensagem = "Fim do software!"; // Utilizamos int para números inteiros,float para números quebrados e string para palavras.
    cout << mensagem;
    // Abaixo exemplos de variáveis que não são permitidas.
	int error; // int i dade  também não é permitido pois consta um espaço desregular
	int error2;  // int 1Idade não pode pois a variável deve iniciar com letra (a - z) ou (A - Z)
	return 0;
}