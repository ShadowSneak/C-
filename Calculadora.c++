#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
    float Equad, a, b, c, sub, soma, num1, num2, divi, multi, segundo_grau_1, segundo_grau_conta_1, segundo_grau_conta_2, segundo_grau_1_delta;
    string operacao, opcao;
    
    cout << "Deseja fazer equações simples ou de 2º grau? ";
    cout << "\n1. Simples.";
    cout << "\n2. 2º Grau.";
    cout << "\n-";
    cin >> opcao;
    
    if (opcao == "1"){
        cout << "Ok, você selecionou operações simples.";
        cout << "\nInforme o 1º algorismo a ser calculado: ";
        cin >> num1;
        
        cout << "Informe o 2º algorismo a ser calculado: ";
        cin >> num2;
        
        cout << "Informe a operação a ser utilizada: ";
        cin >> operacao;
    
        if (operacao == "soma"){
            soma = num1 + num2;
            cout << "Sua soma é: " << soma;
            
        } else {
            if (operacao == "subtração" || operacao == "Subtração" || operacao == "subtracao"){
            sub = num1 - num2;
            cout << "Sua subtração é: " << sub;
                
            } else {
                if (operacao == "Divisão" || operacao == "divisão" || operacao == "divisao"){
                divi = num1 / num2;
                cout << "Sua divisão é: " << divi;
            
                } else {
                    if (operacao == "multiplicação" || operacao == "Multiplicação" || operacao == "multiplicacao"){
                    multi = num1 * num2;
                    cout << "Sua multiplicação é: " << multi;
                    } 
        }
}}
        
    } else {
        if (opcao == "2"){
            
            cout << "Ok, selecionada a equação de 2º grau";
            cout << "\nInsira o valor de A: ";
            cin >> a;
            
            cout << "Insira o valor de B: ";
            cin >> b;
            
            cout << "Insira o valor de C: ";
            cin >> c;
            
            segundo_grau_1 = (b * b) - (4 * a * c);
            segundo_grau_1_delta = sqrt (segundo_grau_1);
            
            segundo_grau_conta_1 = (- b + segundo_grau_1_delta) / (2 * a);
            segundo_grau_conta_2 = (- b - segundo_grau_1_delta) / (2 * a);
            
            cout << "Seu resultado positivo é: " << segundo_grau_conta_1;
            cout << "\nSeu resultado negativo é: " << segundo_grau_conta_2;
            
        }
    
}
}
