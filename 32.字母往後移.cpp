#include <iostream>
using namespace std;
  
int main(){  
    string input;  
    int n=0;  
    getline(cin, input);  
    cin >> n;  
    for(int i=0; i<input.length(); i++){  
        if(input[i] >= 'A' && input[i]<='Z'){  
            cout << (char)((input[i]-'A'+n)%26 + 'A');
            // printf("%c", (input[i]-'A'+n)%26 + 'A');  
        }  
        else if(input[i] >= 'a' && input[i]<='z'){  
            cout << (char)((input[i]-'a'+n)%26 + 'a');
            // printf("%c", (input[i]-'a'+n)%26 + 'a');  
        }  
        else if(input[i] >= '0' && input[i]<='9'){  
            cout << (char)((input[i]-'0'+n)%10 + '0');
            // printf("%c", (input[i]-'0'+n)%10 + '0');  
        }  
        else cout << input[i];  
    }
    cout << endl;
    return 0;  
}  