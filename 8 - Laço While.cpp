#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int num = 1;
	while(num <= 100) // Irá se repetir o que estiver dentro até que seja verdadeiro
	{
	num++; // Irá ficar somando de um em um dentro do while
	if(num > 50) //Se o número que for imprimido for maior que 50 não será imprimido pois será interrompido pelo break 
		break; //Quebrará o laço caso o if seja ultrapassado
	cout << num << endl; // Irá imprimir na tela após cada soma
	
	}
	//Imprimindo números pares 
    int numero = 1;
	while(numero <= 100) // Irá se repetir o que estiver dentro até que seja verdadeiro
	{
	if(numero % 2 != 0) { // Se o número somado for divisivel por 2 continuara o faço
		numero++; // Somando +1 
	    continue; //Continuando
		}
	
	  cout << numero << endl; //Imprimirá somente os pares
	  numero++; // Somará para imprimir dentro do quesito do if
	
	}
 int x = 1; //Declarando valor
 while(x <= 10) //Enquanto x for menor que 10 repita
 {
	 int i = 0; //Declarando valor
	 while(i < 3){  //Enquanto o valor de i for menor que 3
	 	cout << x << endl; // Imprima o x normal
	     i++; //Acrescentando +1 pro laço
	 }
 
            x++; // Imprimindo normal o primeiro while
  }
	return 0;
}