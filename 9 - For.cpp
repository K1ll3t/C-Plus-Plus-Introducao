#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	//Estrutura do For
//	for(Parte1;parte2;parte3) // Separar por ponto e virgula
	{      					  //Parte1 ser� executada UMA vez
                              //Parte2 ser� a condi��o
                              //Parte3 ser� o incremento ou decremento
	}
	
	int i,j; //Foi criado a vari�vel i
	for(i = 1, j = 2; i <= 100; i++,j++) // Enquanto i for menor que 0 ir� incrementar
	{
	cout << "Valor de i:" << i << endl; //Imprimindo o la�o for at� que acabe
    cout << "Valor de j:" << j << endl;	//Ir� imprimir logo ap�s cada resultado do i	
	} //Sempre verificar as chaves para a estrutura do for ser usada certa
 
    //C�lculando o fatorial 
    int num,fat = 1; //Declara os dois valores	
    cout << "Digite um numero:" << endl; //Solicita um n�mero
    cin >> num; //Recebo o valor do n�mero
    for(int i = 1; i < num; i++) //Declara valor a i,enquanto i for menor que o n�mero soma +1
		fat = fat * (i + 1); //Define que o valor de fat ser� ele multiplicado pelo valor dentro de parenteses
		cout << "Fatorial:" << fat << endl; //Imprime o fatorial 
	

	


return 0;


}