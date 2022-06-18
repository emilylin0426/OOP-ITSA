#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    string line;
    while(getline(cin, line)){
        stringstream input(line);
        vector <float> nums;
        float tmp, sum=0;
        while(input >> tmp){
            nums.push_back(tmp);
            sum += tmp;
        }
        cout << "Size: " << nums.size() << endl;
        cout << "Average: " << fixed << setprecision(3) << sum/nums.size() << endl;
    }
}