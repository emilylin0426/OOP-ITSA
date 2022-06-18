#include <iostream>
using namespace std; 
  
int main(){  
    int cnt, i, score[3];  
    cin >> cnt; 
    for(i=0; i<cnt; i++){  
        cin >> score[0] >> score[1] >> score[2];  
        if(score[0]>=60 && score[1]>=60 && score[2]>=60)cout << "P" << endl;  
        else if(score[0]<60 && score[1]<60 && score[2]<60)cout << "F" << endl;  
        else if(score[0]<60){  
            if(score[1]>=60 && score[2]>=60 && score[0]+score[1]+score[2]>=220)cout << "P" << endl;  
            else if(score[1]>=60 && score[2]>=60 && score[0]+score[1]+score[2]<220)cout << "M" << endl;  
            else if((score[1]<60 && score[2]>=80) || (score[2]<60 && score[1]>=80))cout << "M" << endl;  
            else cout << "F" << endl;  
        }  
        else if(score[1]<60){  
            if(score[0]>=60 && score[2]>=60 && score[0]+score[1]+score[2]>=220)cout << "P" << endl;  
            else if(score[0]>=60 && score[2]>=60 && score[0]+score[1]+score[2]<220)cout << "M" << endl;  
            else if((score[0]<60 && score[2]>=80) || (score[2]<60 && score[0]>=80))cout << "M" << endl;  
            else cout << "F" << endl;  
        }  
        else if(score[2]<60){  
            if(score[1]>=60 && score[0]>=60 && score[0]+score[1]+score[2]>=220)cout << "P" << endl;  
            else if(score[1]>=60 && score[0]>=60 && score[0]+score[1]+score[2]<220)cout << "M" << endl;  
            else if((score[1]<60 && score[0]>=80) || (score[0]<60 && score[1]>=80))cout << "M" << endl;  
            else cout << "F" << endl;  
        }  
    }  
    return 0;  
}  