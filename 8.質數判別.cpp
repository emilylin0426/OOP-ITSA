#include <iostream>  
using namespace std;

int main(){  
    int input, i;  
    while(cin >> input){  
        for(i=2; i<input && input%i != 0; i++);  
        if(i == input)cout << "YES" << endl;  
        else cout << "NO" << endl;  
    }  
}