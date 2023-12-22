#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    vector<string> answer1;

    string temp = "";
    int cnt = 0;

    for (int i = 0; my_string.size() > i; i++)
    {
        for (int j = 0; my_string.size() > j + i; j++)
        {
            temp += my_string[j + i];
        }

        answer.push_back(temp);

        temp = "";
    }

    sort(answer.begin(), answer.end());


    return answer;
}