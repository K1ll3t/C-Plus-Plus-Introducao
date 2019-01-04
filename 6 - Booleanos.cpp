#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	bool negativo = 10 > 20; // Booleanos tem dois valor True é 1 ou Falso é 0
	cout << negativo << endl; // Irá imprimir 0 que significa que é falso pois 10 é menor que 20
	
	bool afirmativo = 10 < 20; // Isso é verdadeiro então imprimirá 1
	cout << afirmativo << endl; // Irá imprimir 1 
	if(afirmativo != 0) {
    /* Também podendo ser feito dessa forma.
	Se a variável afirmativo for diferente de 0 será imprimido na tela*/
    cout << "Verdadeiro" << endl; // Imprimirá que é verdadeiro
       
	      if(afirmativo >= 0) { //Se for maior do que 0 imprimirá
	    	cout << "O valor e verdadeiro" << endl; //Será imprimido pois é verdadeiro 1 
	  }
	
	}
 
     if(afirmativo != 0) { //Se a variável afirmativo for diferente de 0 será verdadeira e imprime
		 cout << "Valor verdadeiro" << endl; //Será imprimida
	 }
  
     bool var1 = false; // Definindo que é falso
     bool var2 = true;  // Definindo que é verdadeira
     if(var1 != var2) // Testará se as duas variáveis são diferentes 
		 cout << "Uma e verdadeira e a outra e falsa" << endl; //Irá imprimir pois está certo   
	return 0;
}