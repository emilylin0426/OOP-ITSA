#include <iostream>
using namespace std;
  
int main(){  
    int dice[4], i;  
    for(i=0; i<4; i++){  
        cin >> dice[i];  
    }  
    if(dice[0] == dice[1] && dice[1] == dice[2] && dice[2] == dice[3])cout << "WIN" << endl;  
    else if(dice[0] == dice[1]){  
        if((dice[1] == dice[2] && dice[2]!=dice[3]) || (dice[1] == dice[3] && dice[2]!=dice[3]))cout << "R" << endl;  
        else if(dice[2] == dice[3]){  
            if(dice[0] > dice[2])cout << 2*dice[0] << endl;  
            else cout << 2*dice[2];  
        }  
        else cout << dice[2] + dice[3] << endl;  
    }  
    else if(dice[0] == dice[2]){  
        if((dice[1] == dice[2] && dice[2]!=dice[3]) || (dice[2] == dice[3] && dice[1]!=dice[3]))cout << "R" << endl; 
        else if(dice[1] == dice[3]){  
            if(dice[0] > dice[1])cout << 2*dice[0] << endl;   
            else cout << 2*dice[1]; 
        }  
        else cout << dice[1] + dice[3] << endl;  
    }  
    else if(dice[0] == dice[3]){  
        if((dice[0] == dice[2] && dice[2]!=dice[1]) || (dice[0] == dice[1] && dice[2]!=dice[1]))cout << "R" << endl;
        else if(dice[2] == dice[1]){  
            if(dice[0] > dice[2])cout << 2*dice[0] << endl;   
            else cout << 2*dice[2]; 
        }  
        else cout << dice[2] + dice[1] << endl;  
    }  
    else if(dice[1] == dice[2]){  
        if((dice[1] == dice[0] && dice[2]!=dice[3]) || (dice[1] == dice[3] && dice[2]!=dice[0]))cout << "R" << endl; 
        else if(dice[0] == dice[3]){  
            if(dice[0] > dice[2])cout << 2*dice[0] << endl;  
            else cout << 2*dice[2]; 
        }  
        else cout << dice[0] + dice[3] << endl;  
    }  
    else if(dice[1] == dice[3]){  
        if((dice[1] == dice[2] && dice[2]!=dice[0]) || (dice[1] == dice[0] && dice[2]!=dice[3]))cout << "R" << endl;  
        else if(dice[2] == dice[0]){  
            if(dice[0] > dice[1])cout << 2*dice[0] << endl;  
            else cout << 2*dice[1]; 
        }  
        else cout << dice[2] + dice[0] << endl;  
    }  
    else if(dice[2] == dice[3]){  
        if((dice[1] == dice[2] && dice[2]!=dice[0]) || (dice[0] == dice[2] && dice[1]!=dice[3]))cout << "R" << endl;
        else if(dice[0] == dice[1]){  
            if(dice[0] > dice[2])cout << 2*dice[0] << endl;  
            else cout << 2*dice[2]; 
        }  
        else cout << dice[0] + dice[1] << endl;  
    }  
    else cout << "R" << endl;
    return 0;  
}  