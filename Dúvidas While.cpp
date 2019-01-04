#include <iostream>
using namespace std; 
int main(int argc, char** argv)
{
	int num = 1;
	while(num <= 100){
	{
		if(num % 2 != 0){
			num++;
		  continue;
	}
	}
	 cout << num << endl;
	 num++;
	}
	return 0;
}

//Verificar chaves do if!