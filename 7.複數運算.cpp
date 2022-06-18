#include <iostream> 
using namespace std;

int main(){  
    int cnt, i;  
    string opr;  
    int a1=0, b1=0, a2=0, b2=0;  
    cin >> cnt;  
    for(i=0; i<cnt; i++){  
        cin >> opr >> a1 >> b1 >> a2 >> b2;  
        if(opr == "+"){  
            cout << a1+a2 << " " << b1+b2 << endl;  
        }  
        else if(opr == "-"){  
            cout << a1-a2 << " " << b1-b2 << endl;  
        }  
        else if(opr == "*"){  
            cout << a1*a2 - b1*b2 << " " << a1*b2 + b1*a2 << endl;  
        }  
    }  
    return 0;  
}  