#include<iostream>  
using namespace std;  
  
int main()  
{  
    long double r, sum;  
    long int n, p;  
    cin >> r >> n >> p;  
  
    sum = 0;  
    while (n > 0)  
    {  
        sum += p;  
        sum *= (1.0 + r);  
        n--;  
    }  
    cout << (long)sum << endl;  
    return 0;  
}  