#include <iostream>
using namespace std;
  
int main(){  
    int cnt, i;  
    cin >> cnt;  
    int total, employee, gift;  
    for(i=0; i<cnt; i++){  
        cin >> total >> employee >> gift;  
        int cost[gift];  
        for(int j=0; j<gift; j++){  
            cin >> cost[j];  
        }  
        for(int k=0; k<gift; k++){  
            for(int l=0; l<gift-k-1; l++){  
                if(cost[l]>cost[l+1]){  
                    int tmp;  
                    tmp = cost[l];  
                    cost[l] = cost[l+1];  
                    cost[l+1] = tmp;  
                }  
            }  
        }  
        int sum=0;  
        for(int m=0; m<employee; m++){  
            sum += cost[m];  
        }  
        if(sum <= total){  
            cout << sum << endl;  
        }  
        else cout << "Impossible" << endl;  
    }  
    return 0;  
}  