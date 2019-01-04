#include <iostream>
using namespace std;

void mensagem(int n) //Define que o mensagem deve ter um num int dentro de ()
{
	cout << "Numero:" << n << endl; //Imprime a frase e o numero
}

void mensagem() //Pode ser qualquer coisa a ser imprimida nao ha tipo definido
{
	cout << "Nao tem nada no void" << endl; //Imprime a frase quando chamada
}

void mensagem(char c) //Declara que será um caractere
{
	cout << c << endl; //Imprime a frase quando chamada
}

int main(int argc, char** argv)
{
	mensagem(9); //Do primeiro void
	mensagem(); //Do segundo void
	mensagem('A'); //Do terceiro void
	/* Como foi declarado três valor para a mesma palavra 
	podia ser um desses três tipos em ordens aleátorias.*/
	

	return 0;
}
