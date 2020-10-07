#include <iostream>
using namespace std;

int main(){
    
    float num1 = 0;
    float num2 = 0;
    
    for(int cont = 1; cont <= 5; cont++){
        cout << "Informe um número: ";
        cin >> num1;
        
        if (num1 > num2){
            
            num2 = num1;
            
        }
    }
    
    cout << "O maior numero foi: " << num2;
}
