#include <iostream>
using namespace std;
  
int main(){  
    int input, output[8]={0}, i;  
    while( cin >> input){  
        if(input<0){  
            output[0] = 1;  
            input += 256;  
        }  
          
        for(i=7; i>0; i--){  
            output[i] = input % 2;   
            input /= 2;  
        }  
          
        for(i=0; i<7; i++){  
            cout << output[i];  
        }  
        cout << output[i] << endl;  
    }  
    return 0;  
}  