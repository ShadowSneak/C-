#include <iostream>

using namespace std;



int main (){
    int num1, cont, soma;
    
    cout << "Informe um número inicial: ";
    cin >> num1;
    
    soma = 0;
    
    while (cont < num1){
        
        cont++;
        
        soma = cont + soma;
        
        cout << "\né: " << soma;
        
        }
}
