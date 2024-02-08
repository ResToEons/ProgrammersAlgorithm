#include <string>
#include <vector>
#define ALPHABET_NUM 26

using namespace std;

string solution(string s) {
    string answer = "";
    int alphaCnt[ALPHABET_NUM] = { 0 };
    int strLength = s.length();
    int temp = 0;

    for (int i = 0; strLength > i; i++)
    {
        temp = s[i] - 97;

        alphaCnt[temp]++;
    }

    for (int i = 0; ALPHABET_NUM > i; i++)
    {
        if (alphaCnt[i] == 1)
        {
            answer += (char)(i + 97);
        }
    }

    return answer;
}