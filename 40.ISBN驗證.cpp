#include <iostream>
using namespace std; 
  
int main(){  
    string tmp;  
    int ISBN[10], i;  
    for(i=0; i<10; i++){  
        cin >> tmp[i];  
        if(tmp[i] == 'X'){  
            ISBN[i] = 10;  
        }  
        else ISBN[i] = tmp[i] - '0';  
    }  
    for(i=0; i<2; i++){  
        for(int j=1; j<10; j++){  
            ISBN[j] = ISBN[j-1] + ISBN[j];  
        }  
    }   
    if(ISBN[9]%11 == 0)cout << "YES" << endl;  
    else cout << "NO" << endl;  
    return 0;  
} 