#include <iostream>


using namespace std;

int main()
{
    string regiao;
    
    cout << "Qual é o estado que você irá se mudar: ";
    cin >> regiao;
    
    if (regiao == "sp")
    {
        cout << "Seja Bem-Vindo!";
    } else {
        if (!(regiao == "sp"))
        cout << "Você deveria pensar em se mudar para São Paulo...";
    }
}


