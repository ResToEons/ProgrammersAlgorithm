#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;

    int num = 0;
    string temp = "";

    for (int i = 0; myString.size() > i; i++)
    {
        if (myString[i] == 'x')
        {
            if (!temp.empty())
                answer.push_back(temp);

            temp = "";
        }
        else
        {
            temp += myString[i];
        }
    }

    if (!temp.empty())
        answer.push_back(temp);

    for (int i = 1; answer.size() > i; i++)
    {
        for (int j = 1; answer.size() > j; j++)
        {
            if (answer[j - 1] > answer[j])
            {
                temp = answer[j];
                answer[j] = answer[j - 1];
                answer[j - 1] = temp;
            }
            else if (answer[j - 1] == answer[j])
            {

            }
            else
            {
                // Do Nothing
            }
        }
    }

    //sort(answer.begin(), answer.end());


    return answer;
}