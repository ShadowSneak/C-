#include <iostream>

using namespace std;

int main (){
    int cont, fat, num1;
    char resp;
    
    resp = 'S';
    
    do {
        cout << "Informe um número a ser fatorado: ";
        
        fat = 1;
        cin >> num1;
        
        for (cont = 1; cont <= num1; cont++){
            

            fat = fat * cont;
        }
            
        cout << "!" << num1 << " = " << fat << endl;
            
        cout << "Deseja continuar ? (S/N): ";
        cin >> resp;
    
    } while (resp == 'S');
}