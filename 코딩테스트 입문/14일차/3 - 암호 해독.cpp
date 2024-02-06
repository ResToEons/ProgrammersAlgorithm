#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";

    if (code == 1)
        return cipher;

    for (int i = 1; cipher.length() >= i; i++)
    {
        if (i % code == 0)
        {
            answer += cipher[i - 1];
        }
    }

    return answer;
}