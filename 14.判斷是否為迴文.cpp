#include <iostream>
using namespace std; 
  
int palindrome(string input){  
    int len= input.size()-1;  
    int start=0, end=len;  
    int palin=1;  
    while(start != end && start <= len/2){  
        if(input[start] == input[end]){  
            start++;  
            end--;  
        }  
        else {  
            palin = 0;  
            break;  
        }  
    }  
    if(palin == 0)return 0;  
    else return 1;  
}  
  
int main(){  
    string input;  
    while(cin >> input){  
        if(palindrome(input))cout << "YES" << endl;  
        else cout << "NO" << endl;  
    }  
    return 0;  
}  