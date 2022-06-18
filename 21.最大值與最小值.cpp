#include <iostream>
#include <iomanip>
using namespace std;

int main(){  
    double nums[10];  
    double max, min;  
    cin >> nums[0];  
    max = nums[0];  
    min = nums[0];  
    for(int i=1; i<10; i++){  
        cin >> nums[i];  
        if(nums[i] > max)max = nums[i];  
        if(nums[i] < min)min = nums[i];  
    }  
    cout << "maximum:" << fixed << setprecision(2) << max << endl << "minimum:" << fixed << setprecision(2) << min << endl;  
    return 0;   
}  