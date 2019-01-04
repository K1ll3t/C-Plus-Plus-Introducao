#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int num = 10; //Declarando um valor a variavel num
	switch(num) //O switch irá testar a variável num com cada case até encontrar caso nao tenha sera executado o default
	{
	case 10: //Caso seja 10 ira imprimir 
		cout << "O valor e 10" << endl;
		break; //Sai do switch caso esse case seja verdadeiro
	case 11: //Caso seja 11 ira imprimir 
		cout << "O numero e 11" << endl;
    default: //Caso nenhum esteja correto irá ser impresso esse
		cout << "Numero nao consta" << endl;
		break;
	}


	return 0;
}