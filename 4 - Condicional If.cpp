#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int dinheiro = 10; // Apenas declarando valor a variavel dinheiro
	if(dinheiro > 30) // Se o valor da variavel dinheiro for maior que 10 ele seguira o bloco abaixo
		cout << "Eu vou comprar!" << endl; // A variavel dinheiro e menor entao nao ira ser executado e imprimido
	else //No caso de nao ser verdadeiro o if o else sera executado
	{
		cout << "Nao posso comprar!" << endl; //Imprimindo pois o que restou foi o else
	}

	int numero = 10; // Apenas declarando valor a variavel numero
	if(numero == 10) // Se o valor da variavel numero for igual a variavel ira imprimir pois e verdadeiro
		cout << "Os valores sao iguais" << endl; // Ira ser imprimido
	else
	{
		cout << "O valor e diferente" << endl ; // Nao sera imprimido pois e falso
	}


	int valor = 10; // Apenas declarando valor a variavel valor
	if(valor >= 10) // Se o valor da variavel valor for igual a variavel ira imprimir pois e verdadeiro
		cout << "Igual ou maior" << endl; // Ira ser imprimido
	else
	{
		cout << "O valor e menor"; // Nao sera imprimido pois e falso
	}

	int diferenca = 12; // Apenas declarando valor a variavel diferenca
	if(diferenca != 10) // Se o valor da variavel valor for diferente da variavel ira imprimir pois e verdadeiro
		cout << "Diferente" << endl; // Ira ser imprimido
	else
	{
		cout << "Igual"; // Nao sera imprimido pois e falso
	}

	int incrementou = 12; // Apenas declarando valor a variavel incrementou
	 if(incrementou != 10) // Ira comparar com a variavel incrementou se sao diferente
	cout << "Valor diferente aqui" << endl; // Ira ser imprimido
	incrementou++; // Ira acrescementar + 1 
	cout << incrementou << endl; // Ira imprimir o valor da soma da variavel incrementou com +1 = 13

  //Exemplo de alinhamento de um if dentro de outro if
  int ifs = 10; //Declarando um valor a variavel
  if (ifs >= 30); //Testando se a variavel e maior ou igual que 30
  {
	   cout << "Valor abaixo de 30" << endl; // O valor é menor do que 30 será imprimido
	    if(ifs == 10) {  //Um segundo teste se for igual == irá ser imprimido o cout abaixo também 
	   	cout << "Esta dentro de 30 e 10"; // Resultado caso seja verdadeiro a condicional/condição

	   }
  	   	   
   
  }


	return 0;
}
