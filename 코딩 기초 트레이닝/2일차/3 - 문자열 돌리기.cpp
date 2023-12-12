#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;

    for (int i = 0; str.length() > i; i++)
        cout << str[i] << endl;

    return 0;
}