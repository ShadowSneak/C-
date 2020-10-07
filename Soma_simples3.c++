#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    float xyz;
    
    cout << "Informe um valor a ser atribuído a X: ";
    cin >> x;
    
    cout << "Informe um valor a ser atribuído a Y: ";
    cin >> y;
    
    cout << "Informe um valor a ser atribuído a Z: ";
    cin >> z;
    
    xyz = x + y + z;
    
    cout << "Sua soma é: " << xyz;
    
}