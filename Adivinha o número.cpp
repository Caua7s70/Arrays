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
	cout << "Bem-vindo ao jogo Adivinha o Numero!" << endl;
	cout << "\nInsira um numero entre 1 e 100: ";
	cin >> userGuess;
	while (userGuess != randomNumber)
	{
		if (userGuess < randomNumber)
		{
			cout << "O numero é maior! Tente novamente: ";
			cin >> userGuess;
		}
		else if (userGuess > randomNumber)
			
		{
			cout << "O numero é menor! Tente novamente: ";
			cin >> userGuess;
		}
	}
	cout << "Parabens! Voce adivinhou o numero " << randomNumber << "!" << endl;
}