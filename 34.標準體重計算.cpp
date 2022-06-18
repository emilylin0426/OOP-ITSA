#include <iostream>
#include <iomanip>
using namespace std;
  
int main(){  
    int gender;  
    float height;  
    while(cin >> height >> gender){  
        if(gender == 1)cout << fixed << setprecision(1) << (height-80)*0.7 << endl;  
        else if(gender == 2)cout << fixed << setprecision(1) << (height-70)*0.6 << endl;  
    }  
    return 0;  
}  