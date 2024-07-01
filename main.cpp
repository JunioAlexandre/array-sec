#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int matriz[6][6];
    int i, j;
    
    
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            cout << "Digite um valor para a posicao " << i+1 << ", " << j+1 << " da matriz: ";
            cin >> matriz[i][j];
        }
    }
    cout << endl;
    
    cout << "Os valores da matriz sao: " << endl;
    
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }    
    cout << endl;
    
    cout << "Os valores da diagonal secundaria sao: " << endl;
    
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(i + j == 5){
                cout << matriz[i][j] << " ";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    } 
    
    cout << endl;
    return 0;
}

