#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	//Estrutura do For
//	for(Parte1;parte2;parte3) // Separar por ponto e virgula
	{      					  //Parte1 será executada UMA vez
                              //Parte2 será a condição
                              //Parte3 será o incremento ou decremento
	}
	
	int i,j; //Foi criado a variável i
	for(i = 1, j = 2; i <= 100; i++,j++) // Enquanto i for menor que 0 irá incrementar
	{
	cout << "Valor de i:" << i << endl; //Imprimindo o laço for até que acabe
    cout << "Valor de j:" << j << endl;	//Irá imprimir logo após cada resultado do i	
	} //Sempre verificar as chaves para a estrutura do for ser usada certa
 
    //Cálculando o fatorial 
    int num,fat = 1; //Declara os dois valores	
    cout << "Digite um numero:" << endl; //Solicita um número
    cin >> num; //Recebo o valor do número
    for(int i = 1; i < num; i++) //Declara valor a i,enquanto i for menor que o número soma +1
		fat = fat * (i + 1); //Define que o valor de fat será ele multiplicado pelo valor dentro de parenteses
		cout << "Fatorial:" << fat << endl; //Imprime o fatorial 
	

	


return 0;


}