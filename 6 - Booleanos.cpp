#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	bool negativo = 10 > 20; // Booleanos tem dois valor True � 1 ou Falso � 0
	cout << negativo << endl; // Ir� imprimir 0 que significa que � falso pois 10 � menor que 20
	
	bool afirmativo = 10 < 20; // Isso � verdadeiro ent�o imprimir� 1
	cout << afirmativo << endl; // Ir� imprimir 1 
	if(afirmativo != 0) {
    /* Tamb�m podendo ser feito dessa forma.
	Se a vari�vel afirmativo for diferente de 0 ser� imprimido na tela*/
    cout << "Verdadeiro" << endl; // Imprimir� que � verdadeiro
       
	      if(afirmativo >= 0) { //Se for maior do que 0 imprimir�
	    	cout << "O valor e verdadeiro" << endl; //Ser� imprimido pois � verdadeiro 1 
	  }
	
	}
 
     if(afirmativo != 0) { //Se a vari�vel afirmativo for diferente de 0 ser� verdadeira e imprime
		 cout << "Valor verdadeiro" << endl; //Ser� imprimida
	 }
  
     bool var1 = false; // Definindo que � falso
     bool var2 = true;  // Definindo que � verdadeira
     if(var1 != var2) // Testar� se as duas vari�veis s�o diferentes 
		 cout << "Uma e verdadeira e a outra e falsa" << endl; //Ir� imprimir pois est� certo   
	return 0;
}