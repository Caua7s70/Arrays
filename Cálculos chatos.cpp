#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char t;
	float  num;
	
	cout << "Digite 'c' para transformar Celsius em Fahrenheit e 'f' para transformar Fahrenheit em Celsius\n";
	cin >> t;
	cout << "Digite a temperatura:\n";
	cin >> num;

	if (t == 'c')
	{
		float f = (num * 9 / 5) + 32;
		cout << num << " graus Celsius equivalem a " << f << " graus Fahrenheit.\n";
	}
	else if (t == 'f')
	{
		float c = (num - 32) * 5 / 9;
		cout << num << " graus Fahrenheit equivalem a " << c << " graus Celsius.\n";
	}
	else
	{
		cout << "opcao invalida.\n";
	}

















}