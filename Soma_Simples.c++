#include <iostream>

using namespace std;

main (){
    
    int num1, num2, soma;
    
    cout << "Digite 2 valores inteiros a serem calculados:";
    
    cout << "\nPrimeiro valor: ";
    cin >> num1;
    
    cout << "Segundo valor: ";
    cin >> num2;
    
    soma = num1 + num2;
    
    
    if (soma > 10)
    {
        cout << "Sua soma é maior que 10, então sua soma é: " << soma;
    } 
    else
    {
        cout << "Sua soma é menor que 10, então sua soma não será mostrada.";
    }
}