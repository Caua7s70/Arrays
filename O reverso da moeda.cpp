#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nomes[5]={};
    char resposta;
    do
    {
    for (int i=0;i<5;i++)
    {
       cout << "fala o " <<i+1<< "º nome";
        cin >> nomes[i];
    }
    for (int i=4;i>=0;i--)
    {
        cout<<nomes[i]<<endl;
    }
    cout << "deseja sair? (s/n)";
    cin >> resposta;
    }while (resposta!='s');
    return 0;
}