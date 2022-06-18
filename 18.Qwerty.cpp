#include <iostream>
using namespace std;

int main(){
    string input;
    string keyboard = "~!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdfghjkl;''<>??zxcvbnm,.//  ";
    //兩條斜線會變註解，所以另外判斷
    //空白會被切割，所以只能用getline
    while(getline(cin, input)){
        for(int i=0; i<input.length(); i++){
            if(isupper(input[i]))input[i] += 32;
            if(input[i] == '/'){
                cout << "/";
                continue;
            }
            else for(int j=0; j<keyboard.length()-1; j++){
                if(input[i] == keyboard[j])cout << keyboard[j+1];
            }
        }
        cout << endl;
    }
}