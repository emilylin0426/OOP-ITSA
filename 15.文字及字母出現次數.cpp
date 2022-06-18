#include <iostream>
using namespace std;
  
int main(){  
    string line;   
    while(getline(cin, line)){  
        int wordcnt=1;  
        int alphcnt[26] = {0};  
        //int len = strlen(line)-1;  
        for(int i=0; i<line.length(); i++){  
            if(line[i]>='A' && line[i]<='Z'){  
                alphcnt[ line[i] - 'A' ]++;  
            }  
            else if(line[i]>='a' && line[i]<='z'){  
                alphcnt[ line[i] - 'a' ]++;  
            }  
            if(line[i] == ' ' && i!=line.length()-1){  
                wordcnt++;  
            }  
        }
        cout << wordcnt << endl;
        // printf("%d\n", wordcnt);  
        for(int i=0; i<26; i++){  
            if(alphcnt[i]!=0){  
                //printf("%c : %d\n", 'a'+i, alphcnt[i]);
                cout << (char)('a'+i) << " : " << alphcnt[i] << endl;
            }  
        }  
    }  
    return 0;  
}  