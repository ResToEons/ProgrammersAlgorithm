#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;

    for (int y = 0; b > y; y++)
    {
        for (int x = 0; a > x; x++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}