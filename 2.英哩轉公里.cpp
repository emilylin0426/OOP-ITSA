#include <iostream>
#include <iomanip>  //setprecision()定義在這
using namespace std;

int main(){
    double input;
    while( cin >> input){
        cout << fixed << setprecision(1) <<input*1.6 << endl;
        //用fixed固定setprecision是設定小數點後，才不會變總位數
    }
}