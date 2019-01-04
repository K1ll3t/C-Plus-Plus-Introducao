#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int num = 10; // Declara o valor de num a 10
    cout << ++num << endl; // Ira somar primeiro + 1 e apos imprimir seguindo a estrutura de codigo
    
 	int num2 = 20; // Declara o valor de num2 a 20
    cout << num2++ << endl; // Ira seguir a logica do codigo primeiro imprimindo o numero e nao somara
    
    char c = 'a'; // Verificar a tabela ascii para ver os valores http://3.bp.blogspot.com/_eGhQlH7746o/S9J0kPqeVkI/AAAAAAAAA_o/VeKOZxLj6pg/s1600/ascii-0-127.jpg
    char d = 'b'; // Cada letra convertida pelo char tem um valor pre definido em decimal na tabela ascii
	int resultado = c + d; // O resultado sera feito atraves da soma dos valores
	cout << resultado << endl; // E sera imprimido atraves dessa linha
	 
	char e = '\''; 
	cout << e << endl; // Ira imprimir uma aspas simples
	return 0;
}