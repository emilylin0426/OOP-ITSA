#include <iostream>
#include <sstream>
#include <iterator>
#include <map>
using namespace std;

int main(){
    string line;
    while(getline(cin, line)){
        stringstream input(line);
        map <int, int> nums;
        int tmp, totalnum=0;
        while(input >> tmp){
            totalnum++;
            if(nums.find(tmp) != nums.end())nums.find(tmp)->second ++;
            else nums.insert(pair<int, int>(tmp, 1));
        }
        int check = 0;
        for(auto it : nums){
            if(it.second > totalnum/2){
                cout << it.first << endl;
                check = 1;
                break;
            }
        }
        if(check == 0)cout << "NO" << endl;
    }
}