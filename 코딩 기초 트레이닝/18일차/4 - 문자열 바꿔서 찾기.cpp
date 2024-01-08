#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;

    for (int i = 0; myString.size() > i; i++)
    {
        if (myString[i] == 'A')
        {
            myString[i] = 'B';
        }
        else
        {
            myString[i] = 'A';
        }
    }

    if (myString.find(pat) != -1)
    {
        answer = 1;
    }
    else
        answer = 0;

    return answer;
}