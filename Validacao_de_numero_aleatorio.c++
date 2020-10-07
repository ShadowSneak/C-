#include <stdio.h>
#include <iostream>

using namespace std;

main()
{
  int num1;
  
  cout << "Digite um valor aleatório: ";
  cin >> num1;
  
    if (num1 >= 500 && num1 <= 900)
    {
        
        cout << "Seu valor está na faixa, Parabéns!";
        
    } else {
        
        cout << "Seu valor não está na faixa, que pena!";
        
    }
}