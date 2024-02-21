#include <string>
#include <vector>
#define ALPHABET_NUM 26

using namespace std;

int solution(string before, string after) {
    char temp;
    int answer = 1;
    vector<char> beforeAlpha(ALPHABET_NUM);
    vector<char> afterAlpha(ALPHABET_NUM);

    for (int i = 0; before.length() > i; i++)
    {
        temp = before[i];
        beforeAlpha[temp - 97]++;

        temp = after[i];
        afterAlpha[temp - 97]++;
    }

    for (int i = 0; ALPHABET_NUM > i; i++)
    {
        if (beforeAlpha[i] == afterAlpha[i])
        {
            // Do Nothing
        }
        else
        {
            // Found different alphabet's total value
            return 0;
        }
    }

    return answer;
}