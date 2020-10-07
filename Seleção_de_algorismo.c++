#include <iostream>

using namespace std;

main()
{
    int num1, num2;
    
    cout << "Informe um algarismo inteiro: ";
    cin >> num1;
    
    cout << "O número informado é: " << num1;
    
    cout << "\nInforme outro algarismo inteiro: ";
    cin >> num2;
    
    cout << "O número informado é: " << num2;
    
    if (num1 <= 1)
        { 
            cout << "\nSeu primeiro número é muito baixo!";
        } else {
            cout << "\nSeu primeiro número é muito alto!";
        }
    if (num2 >= 2)
        { 
            cout << "\nSeu segundo número é muito alto!";
        } else {
            cout << "\nSeu segundo número é muito baixo!";
        
        }
}

