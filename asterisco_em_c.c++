#include <iostream>
using namespace std;

int main (){
    
    int triangulo, simbolo, aster;
    
    cout << "Quantas linhas você deseja que o triângulo tenha?: ";
    cin >> triangulo;
    
    for (aster = 1; aster <= triangulo; aster++){
        
      cout << "\n";
      
      for (simbolo = 1; simbolo <= aster; simbolo++){
    
	  cout << "*";
	  
	  }
    }
}
