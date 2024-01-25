#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    for (int i = 0; n > i; i++)
    {
        for (int j = 0; i >= j; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}