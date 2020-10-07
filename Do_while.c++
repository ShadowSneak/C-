#include <iostream>

using namespace std;

int main(){
    int n,r;
    char resp;
    
    resp = 'S';
    
    do {
        cout << "Digite um número: ";
        cin >> n;
        
        r = n * 3;
        
        cout << "Seu resultado é: " << r << endl;
        
        cout << "Deseja continuar ? (S/N): ";
        cin >> resp;
        
    } while (resp == 'S');
}

