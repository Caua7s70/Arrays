#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	char sair = 'n';
	string namoradas[5];
	string apelidos[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Digite o nome da " << i + 1 << "� namorada: ";
		cin >> namoradas[i];
		cout << "Digite o apelido da " << i + 1 << "� namorada: ";
		cin >> apelidos[i];
	}
	while (sair != 's')
	{
	cout << "digite um n�mero para saber sua namorada";
	cin >> n;
	cout << "A namorada " << n << " � a " << namoradas[n - 1] << " e o seu apelido � " << apelidos[n - 1] << ".";
	cout << "\ndeseja sair? (s/n) ";
	cin >> sair;
	}
}