#include <iostream>
using namespace std;  
  
int main(){  
    int col, row, i, j;  
    while(cin >> row >> col){  
        int matrix[row][col];  
        for(i=0; i<row; i++){  
            for(j=0; j<col; j++){  
                cin >> matrix[i][j];  
            }  
        }  
        for(i=0; i<col; i++){  
            for(j=0; j<row-1; j++){  
                cout << matrix[j][i] << " ";  
            }  
            cout << matrix[j][i] << endl;  
        }  
    }  
    return 0;  
}