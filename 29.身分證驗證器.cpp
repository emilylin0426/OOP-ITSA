#include <iostream>
using namespace std;
  
int main(){  
    string id;
    int check=0, alph=0;  
    int table[] = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};  
    while(cin >> id){  
        check=0;  
        alph = table[id[0] - 'A'];  
        check = (alph%10)*9 + alph/10;  
        for(int i=1; i<9; i++){  
            check += (id[i]-'0')*(9-i);   
        }
        check += (id[9]-'0');   //因為前面for迴圈裏面，如果i==9會變成乘以0，所以9另外算
        if(check%10 == 0)cout << "CORRECT!!!" << endl;  
        else cout << "WRONG!!!" << endl;  
    }  
    return 0;  
}  