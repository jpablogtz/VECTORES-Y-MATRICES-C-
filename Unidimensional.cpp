#include <iostream>
using namespace std; 

int main() {
   
    int numeros[5];

    
    cout << "Por favor, ingresa 5 numeros enteros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa el numero para la posicion [" << i << "]: ";
        cin >> numeros[i]; 
    }

    
    cout << "\nLos numeros que ingresaste son: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl; 
    return 0;
}
