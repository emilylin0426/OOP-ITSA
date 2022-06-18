#include <iostream>
using namespace std;
  
int main(){  
    int month, date;  
    while(cin >> month >> date){  
        switch(month){  
            case 1:  
                if(date>=21)cout << "Aquarius" << endl;  
                else cout << "Capricorn" << endl;  
                break;  
            case 2:  
                if(date>=19)cout << "Pisces" << endl;  
                else cout << "Aquarius" << endl;  
                break;  
            case 3:  
                if(date>=21)cout << "Aries" << endl;  
                else cout << "Pisces" << endl;  
                break;  
            case 4:  
                if(date>=21)cout << "Taurus" << endl;  
                else cout << "Aries" << endl;  
                break;  
            case 5:  
                if(date>=22)cout << "Gemini" << endl;  
                else cout << "Taurus" << endl;  
                break;  
            case 6:  
                if(date>=22)cout << "Cancer" << endl;  
                else cout << "Gemini" << endl;  
                break;  
            case 7:  
                if(date>=23)cout << "Leo" << endl;  
                else cout << "Cancer" << endl;  
                break;  
            case 8:  
                if(date>=24)cout << "Virgo" << endl;  
                else cout << "Leo" << endl;  
                break;  
            case 9:  
                if(date>=24)cout << "Libra" << endl;  
                else cout << "Virgo" << endl;  
                break;  
            case 10:  
                if(date>=24)cout << "Scorpio" << endl;  
                else cout << "Libra" << endl;  
                break;  
            case 11:  
                if(date>=23)cout << "Sagittarius" << endl;  
                else cout << "Scorpio" << endl;  
                break;  
            case 12:  
                if(date>=22)cout << "Capricorn" << endl;  
                else cout << "Sagittarius" << endl;  
                break;  
        }  
    }  
    return 0;  
}  