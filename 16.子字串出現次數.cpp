#include <iostream>
#include <string>
using namespace std;

int main(){  
    string target, line;
    while(cin >> target >> line){   
        int cnt=0, ptr; 
        ptr = line.find(target);
        while(ptr != string::npos){  
            ptr++;  
            cnt++;
            ptr = line.find(target, ptr);
        }
        cout << cnt << endl;  
        // printf("%d\n", cnt);
    }
    return 0;  
}  