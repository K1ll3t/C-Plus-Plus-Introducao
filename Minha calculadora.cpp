#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
	
	int num1,num2,resultado; ///Declarando variaveis
	float div;  //Declarando uma variavel flutuante
	char op; //Operador
	
	cout << "Numero 1: " << endl; //Solicitando um número
	cin >> num1; //Lendo o número
	cout << "Numero 2: " << endl; //Solicitando um número
	cin >> num2; //Lendo o número
	cout << "Sinal: " << endl; //Solicitando um sinal
	cin >> op; //Lendo o sinal
	switch(op)
	{
	case '+':
		resultado = num1 + num2;
		cout << "Soma: " << resultado << endl;
		break;
    
    case '-':
		resultado = num1 - num2;
		cout << "Sub: " << resultado << endl;
		break;
    
   case '*':
		resultado = num1 * num2;
		cout << "Multi: " << resultado << endl;
		break;
	
   case '/':
		if(num2 != 0)
		{
			div = (float)num1 / num2;
			cout << "Divisao " << div << endl;
		}
		
		else
		{
			cout << "Divisao por zero" << endl;
		}
		break;
   
     default:
	  cout << "Sem sinal" << endl;
		break;
	}
	
	
	return 0;
}

