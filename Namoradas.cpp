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
		cout << "Digite o nome da " << i + 1 << "ª namorada: ";
		cin >> namoradas[i];
		cout << "Digite o apelido da " << i + 1 << "ª namorada: ";
		cin >> apelidos[i];
	}
	while (sair != 's')
	{
	cout << "digite um número para saber sua namorada";
	cin >> n;
	cout << "A namorada " << n << " é a " << namoradas[n - 1] << " e o seu apelido é " << apelidos[n - 1] << ".";
	cout << "\ndeseja sair? (s/n) ";
	cin >> sair;
	}
}