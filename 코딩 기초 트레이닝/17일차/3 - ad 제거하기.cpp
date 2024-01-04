#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;

    for (int i = 0; strArr.size() > i; i++)
    {
        if (strArr[i].find("ad") == -1)
        {
            answer.push_back(strArr[i]);
        }
        else
        {
            // Do Nothing
        }
    }

    return answer;
}