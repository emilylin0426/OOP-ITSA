#include <iostream>
using namespace std;
  
int main(){  
    string ans, guess;  
    cin >> ans >> guess;
    while(guess != "0000"){  
        int a=0, b=0;  
        for(int i=0; i<4; i++){  
            if(guess[i]==ans[i])a++;  
            else {
                for(int j=0; j<4; j++){
                    if(ans[j] == guess[i]){
                        b++;
                        break;
                    }
                }
                // if(strchr(ans, guess[i]))b++;
            } 
        }
        cout << a << "A" << b << "B" << endl;
        cin >> guess;  
    }  
    return 0;  
}  