#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;


    for (int i = 0; str.length() > i; i++)
    {
        if (str[i] >= 97 && str[i] < 123)
            str[i] = str[i] - 32;
        else
            str[i] = str[i] + 32;
    }

    cout << str;

    return 0;
}
