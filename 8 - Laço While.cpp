#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int num = 1;
	while(num <= 100) // Ir� se repetir o que estiver dentro at� que seja verdadeiro
	{
	num++; // Ir� ficar somando de um em um dentro do while
	if(num > 50) //Se o n�mero que for imprimido for maior que 50 n�o ser� imprimido pois ser� interrompido pelo break 
		break; //Quebrar� o la�o caso o if seja ultrapassado
	cout << num << endl; // Ir� imprimir na tela ap�s cada soma
	
	}
	//Imprimindo n�meros pares 
    int numero = 1;
	while(numero <= 100) // Ir� se repetir o que estiver dentro at� que seja verdadeiro
	{
	if(numero % 2 != 0) { // Se o n�mero somado for divisivel por 2 continuara o fa�o
		numero++; // Somando +1 
	    continue; //Continuando
		}
	
	  cout << numero << endl; //Imprimir� somente os pares
	  numero++; // Somar� para imprimir dentro do quesito do if
	
	}
 int x = 1; //Declarando valor
 while(x <= 10) //Enquanto x for menor que 10 repita
 {
	 int i = 0; //Declarando valor
	 while(i < 3){  //Enquanto o valor de i for menor que 3
	 	cout << x << endl; // Imprima o x normal
	     i++; //Acrescentando +1 pro la�o
	 }
 
            x++; // Imprimindo normal o primeiro while
  }
	return 0;
}