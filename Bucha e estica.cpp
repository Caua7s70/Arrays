#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, maior = 0, menor = 2147483647;

	do
	{
		cout << "digite um número ";
		cin >> num;
if (num > maior)
		{
			maior = num;
		}
		if (num < menor && num != 0)
		{
			menor = num;
		}
	} while (num != 0);

		
		cout << "o maior número é: " << maior << endl;
		cout << "o menor número é: " << menor << endl;
		return 0;
	
}