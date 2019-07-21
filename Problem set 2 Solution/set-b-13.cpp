#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string s;
    getline(cin >> ws , s);
    int x = s.size();
    float v = 0 , c = 0 , d = 0;
    for(char c : s)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            v++;
        else if(c == '0' || c == '2' || c == '3' || c == '4' || c == '1' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
            d++;
    }
    cout << "Vowels = " << fixed << setprecision(2) << ((v*100)/x) << " % \n" <<endl;
    cout << "Consonants = " << (100-(((v*100)/x)+((d*100)/x))) << " % \n" <<endl;
    cout << "Digits = " << ((d*100)/x) << " % \n" <<endl;
}
