#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
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
	
	while (sair == 'n')
	{

		cout << "digite um n�mero para saber sua namorada";
		cin >> num;

		if (num >= 1 && num <= 5)
		{
			cout << "A namorada " << num << " � a " << namoradas[num - 1] << " e o seu apelido � " << apelidos[num - 1] << ".";
			cout << "\ndeseja sair? (s/n)";
			cin >> sair;
		}
		else
		{
			cout << "calma la paizao vc nao tem tantas namoradas";
			cout << "\ndeseja sair? (s/n)";
			cin >> sair;
		}

	}
}