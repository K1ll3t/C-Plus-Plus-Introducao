#include <iostream>

using namespace std;

int main () 
{
	int  idade, idade2, idade3; // declarar v�rias vari�veis em uma linha �nica
	int  Idade; // Uma outra vari�vel com diferen�a apenas de 1 caractere mai�sculo

	
	idade = 20; // Declarando um n�mero a idade
	cout << idade << endl;  // Imprimindo o valor da idade e utilizando o endl para uma quebra de linha 
    
    float pi = 3.14; // Declara a vari�vel pi o valor "quebrado"
    cout << pi << endl; // Imprimindo o valor de pi 
    
    double pi_extendido = 3.1415; // O double diferencia do float pois calcula com mais precisao numero grandes
    cout << pi_extendido << endl; 
    
    string mensagem = "Fim do software!"; // Utilizamos int para n�meros inteiros,float para n�meros quebrados e string para palavras.
    cout << mensagem;
    // Abaixo exemplos de vari�veis que n�o s�o permitidas.
	int error; // int i dade  tamb�m n�o � permitido pois consta um espa�o desregular
	int error2;  // int 1Idade n�o pode pois a vari�vel deve iniciar com letra (a - z) ou (A - Z)
	return 0;
}