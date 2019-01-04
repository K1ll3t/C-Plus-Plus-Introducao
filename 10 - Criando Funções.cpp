#include <iostream>
using namespace std;

bool par(int num) //Declara que a var par deve receber um numero int 
	              //E fara o teste no if se for verdadeiro ou falso
{
	if (num % 2 == 0)  
		return true;
	    return false; 
		
}

void mensagem() //Não retorna nada apenas defini argumento,e chama ela usando parenteses
{
	cout << "Um tipo" << endl;
}

int main(int argc, char** argv)
{
	int n;
	cout << "Digite um numero:" << endl;
	cin >> n;
	if(par(n))
		cout << "O numero e par " << n << endl;
else
{
	cout << "O numero nao e par " << n << endl;
}
mensagem(); // Chamando via parenteses para imprimir
	return 0;
}