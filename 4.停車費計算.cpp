#include <iostream>
using namespace std; 
  
int main(){  
    int hour_in, min_in;  
    int hour_out, min_out;  
    int cost;  
    while(cin >> hour_in >> min_in){  
        cin >> hour_out >> min_out;  
        int time;  
        if(min_out - min_in < 0){  
            min_out += 60;  
            hour_out--;  
        }  
        time = (hour_out - hour_in)*60 + (min_out - min_in);  
        if(time <= 120) cout << time / 30 * 30 << endl;  
        else if(time <= 240){  
            cost = 120 + ( (time-120)/30 ) * 40;  
            cout << cost << endl; 
        }  
        else {  
            cost = 120 + 160 + ( (time-240)/30 ) * 60;  
            cout << cost << endl;  
        }  
    }  
    return 0;  
}  