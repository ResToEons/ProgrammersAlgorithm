#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string str = my_str;
    string temp;
    while (str.length() > n)
    {
        for (int i = 0; n > i; i++)
        {
            temp += str[i];
        }

        answer.push_back(temp);

        str.erase(0, n);
        temp = "";
    }

    answer.push_back(str);

    return answer;
}