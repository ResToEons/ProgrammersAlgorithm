#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;

    if (a < 1 || b > 100)
        return -1;

    cout << a << " + " << b << " = " << a + b << endl;
    return 0;
}