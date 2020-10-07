#include <iostream>
using namespace std;

int main (){
    
    int N, R;
    char resp;
    
    resp = 'S';
    
    while (resp == 'S'){
        cout << "um número, para ser multiplicado: ";
        cin >> N;
        
        R = N * 3;
        
        cout << "R: " << R << endl;
        
        cout << "Deseja continuar ?(S/N): ";
        cin >> resp;
        if (resp == 'n'){
            break;
        }
    }
    
}