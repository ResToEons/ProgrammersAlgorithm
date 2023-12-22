#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;

    string temp = "";

    for (int i = 0; intStrs.size() > i; i++)
    {
        for (int j = 0; l > j; j++)
        {
            temp += intStrs[i][s + j];
        }

        if (stoi(temp) > k)
        {
            answer.push_back(stoi(temp));
        }

        temp = "";
    }

    return answer;
}