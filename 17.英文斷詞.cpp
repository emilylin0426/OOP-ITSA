#include <iostream>
#include <vector>
using namespace std;

int main(){
    string input;
    vector <string> count;
    while(cin >> input){
        int find=0;
        for(int i=0; i<input.length(); i++){
            if(isupper(input[i])){
                // cout << "enter!" << endl;
                // tolower(input[i]);
                input[i] += 32;
            }
        }
        // cout << input << endl;
        for(int i=0; i<count.size(); i++){
            if(input == count[i])find = 1;
        }
        if(find == 0)count.push_back(input);
    }
    for(int i=0; i<count.size()-1; i++){
        cout << count[i] << " ";
    }
    cout << count[count.size()-1] << endl;
}