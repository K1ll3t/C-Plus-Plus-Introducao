#include <iostream>

using namespace std;

int soma(int n1, int n2) //Declarando que soma deve ter 2 num int 
{
	return n1 + n2; //Recebe os 2 num
}

int soma(int n1, int n2, int n3) //Declarando que soma deve ter 3 num int 
{
	return n1 + n2 + n3; //Recebe os 3 num
}

int main(int argc, char *argv[])
{
	cout << soma(1, 2) << endl; //Chama a funcao soma primeira pois sao dois num
	cout << soma(1, 2, 3) << endl; //Chama a funcao soma primeira pois sao tres num
	return 0;
}
