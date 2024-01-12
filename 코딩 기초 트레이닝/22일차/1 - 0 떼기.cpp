#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int idx = 0;
    for (int i = 0; n_str.size() > i; i++)
    {
        if (n_str[i] == '0')
        {

        }
        else
        {
            idx = i;
            break;
        }
    }

    for (int i = idx; n_str.size() > i; i++)
    {
        answer.push_back(n_str[i]);
    }

    return answer;
}