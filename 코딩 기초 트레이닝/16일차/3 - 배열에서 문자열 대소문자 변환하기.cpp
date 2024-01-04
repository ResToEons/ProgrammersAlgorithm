#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    string temp = "";

    for (int i = 0; strArr.size() > i; i++)
    {
        if (i % 2 == 0)
        {
            temp = strArr[i];

            for (int j = 0; strArr[i].size() > j; j++)
            {
                temp[j] = tolower(strArr[i][j]);
            }

            answer.push_back(temp);
        }
        else
        {
            temp = strArr[i];

            for (int j = 0; strArr[i].size() > j; j++)
            {
                temp[j] = toupper(strArr[i][j]);
            }

            answer.push_back(temp);
        }

        temp = "";
    }

    return answer;
}