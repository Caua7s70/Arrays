#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	srand(time(0));
	int randomNumber = rand() % 100 + 1;
	int userGuess;
	int attempts = 0;
	cout << "Bem-vindo ao jogo Adivinha o Numero!" << endl;
	cout << "\nInsira um numero entre 1 e 100: ";
	cin >> userGuess;
	attempts++;

	while (userGuess != randomNumber)
	{
		if (userGuess < randomNumber)
		{
			cout << "O numero é maior! Tente novamente: ";
			cin >> userGuess;
			attempts++;
		}
		else if (userGuess > randomNumber)
			
		{
			cout << "O numero é menor! Tente novamente: ";
			cin >> userGuess;
			attempts++;
		}
	}
	if (attempts < 6)
	{
		cout << "Voce acertou em " << attempts << " tentativas!" << endl;
		cout << "Parabens, voce eh um genio! Voce adivinhou o numero " << randomNumber << "!" << endl;
	}
	else if (attempts < 11)
	{
		cout << "Voce acertou em " << attempts << " tentativas!" << endl;
		cout << "Bom trabalho! Voce adivinhou o numero " << randomNumber << "!" << endl;
	}
	
	 else
	{
		cout << "Voce acertou em " << attempts << " tentativas!" << endl;
		cout << "Voce finalmente conseguiu! Apesar de ser um completo idiota, acertou o numero " << randomNumber << "!" << endl;
	}
}
	
