#include <iostream>
using namespace std;  
  
int main(){  
    int n;  
    while(cin >> n){  
        int ans=0;  
        for(int i=3; i<=n; i++){  
            if(i%3 == 0){  
                ans += i;  
            }  
        }  
        cout << ans << endl;  
    }  
    return 0;  
}  