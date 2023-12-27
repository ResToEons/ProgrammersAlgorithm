#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";

    sort(indices.begin(), indices.end());

    int cnt = 0;

    for (int i = 0; my_string.length() > i; i++)
    {
        if (indices[cnt] == i)
        {
            cnt++;
        }
        else
        {
            answer += my_string[i];
        }
    }

    return answer;
}