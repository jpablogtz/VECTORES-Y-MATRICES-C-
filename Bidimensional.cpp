#include <iostream>
using namespace std;

int main() {
    
    int matriz[2][3];

    
    cout << "=== LLENAR LA MATRIZ ===" << endl;
    for (int f = 0; f < 2; f++) { 
        for (int c = 0; c < 3; c++) { 
            cout << "Ingresa valor para la fila " << f << ", columna " << c << ": ";
            cin >> matriz[f][c];
        }
    }

    
    cout << "\n=== TU MATRIZ IMPRESA ===" << endl;
    for (int f = 0; f < 2; f++) { 
        for (int c = 0; c < 3; c++) { 
            
            cout << matriz[f][c] << "\t"; 
        }
        cout << endl; 
    }

    return 0;
}
