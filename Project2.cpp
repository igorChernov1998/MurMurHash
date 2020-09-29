#include <iostream>
#include <string> 
#include <vector>
#include "MurMurHash2.h"
using namespace std;

int main()
{
    char* key;
    cout << "Hello! This programm will find MurMurHash of the string You are going to input!\nLet's start!" << endl;
    while (true) {
        string str = "some string";
        cout << "Please, enter any key > ";
        cin >> str;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!cin.good()) {
            cout << "Oops! Wrong data! Please, try again!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        key = &str[0u];
        unsigned int len = str.length();
        unsigned int res = MurMurHash2(key, len);
        cout << "MurMurHash result: " << res << endl;
        cout << "Do you want to continue? (Y/N) > ";
        string ans = "";
        cin >> ans;
        if (!cin.good()) {
            cout << "Oops! Wrong data! Please, try again!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (ans == "Y" || ans == "y") {
            str = "";
            continue;
        }
        else {
            break;
        }
    }
    cout << "Thank You! Good luck!" << endl;
    return 0;
}
