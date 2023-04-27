#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int correct_password = 2002, input_password;
	
	do{
		cin >> input_password;
		if(input_password != correct_password){
			cout << "Senha Invalida" << endl;
		}
	}
	while(input_password != correct_password);
	
	cout << "Acesso Permitido" << endl;
	
	return 0;
}