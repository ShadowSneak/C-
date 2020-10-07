#include <iostream>
using namespace std;

int
main ()
{
  int num1, tabuada, cont, multi, num2;
  char resp;

  cout << "Digite um numero para saber seu resultado na tabuada: ";
  cin >> num1;

  cont = 0;
  num2 = 1;
  resp == 'S';

  do
    {
      do
	{

	  cout << "Resultado de: " << num1 << "x" << cont << " eh " << multi << endl;
	  multi = num2 * num1;
	  cont = cont + 1;
	  num2 = num2 + 1;

	}
      while (cont < 11);

      cout << "Deseja continuar ? (S/N): ";
      cin >> resp;

      if (resp == 'n'){
          break;
      }else{
          resp = 'S';
      }
      cont = 0;
      multi = 0;
      num2 = 1;

      cout << "Digite um numero para saber seu resultado na tabuada: ";
      cin >> num1;

    }
  while (resp == 'S');

}


