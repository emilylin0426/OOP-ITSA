#include <iostream>
#include <sstream>
using namespace std; 
  
int main(){  
    int money;
    int apple, orange, peach;
    string line;
    getline(cin, line);
    for(int i=0; i<line.length(); i++){
        if(line[i] == ',')line[i] = ' ';
    }
    stringstream input(line);
    input >> money >> apple >> orange >> peach;  
    if( money < apple*15+orange*20+peach*30)cout << "0" << endl;  
    else {  
        int change = money - apple*15 - orange*20 - peach*30;  
        cout << change%5 << "," << (change-(50* (change/50) ) )/5 << "," << change/50 << endl;
    }  
    return 0;  
}  