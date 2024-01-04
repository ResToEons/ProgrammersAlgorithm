#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string temp = "";

    for (int i = 0; myString.size() - pat.size() >= i; i++)
    {
        for (int j = 0; pat.size() > j; j++)
        {
            temp += myString[i + j];
        }

        if (temp.find(pat) != -1)
        {
            answer++;
        }
        temp = "";

    }

    return answer;
}