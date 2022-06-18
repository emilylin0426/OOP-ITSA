#include <iostream>
using namespace std; 
  
int main(){  
    int x,y;  
    while(cin >> x >> y){  
        if( (x*x) + (y*y) > (100*100) )cout << "outside" << endl;  
        else cout << "inside" << endl;  
    }  
    return 0;  
}  