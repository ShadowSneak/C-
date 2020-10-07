#include <iostream>
using namespace std;


int main(){
    
    int cont, num1;
    
    //cont = 0;
    
    cout << "Informe o Ãºltimo nÃºmero a ser impresso: ";
    cin >> num1;
    
    num1 --;
    
    while (cont <= num1){
        cont ++;
        cout << "\nImprimindo atÃ©: " << cont;
        
    }
    
    num1++;
    
    cout << "\nSeu nÃºmero final Ã©: " << num1;
}
