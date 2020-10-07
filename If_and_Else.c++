#include <iostream>

using namespace std;

main (){
    
    int num1, num2, soma, soma_maior, soma_menor;
    
    cout << "Digite 2 números inteiros, para serem somados: ";
    
    cout << "\nDigite seu primeiro número: ";
    cin >> num1;
    
    cout << "Digite seu segundo número: ";
    cin >> num2;
    
    soma = num1 + num2 ;
    
    if (soma >= 10)
    { 
        soma_maior = soma + 5;
        cout << "Seu resultado é maior que 10, logo será adicionado 5, resultando em: " << soma_maior;
        
    } else {
        
        soma_menor = soma - 7;
        cout << "Seu resultado é menor que 10, logo será subtraído 7, resultando em: " << soma_menor;
        
    }
    
}
