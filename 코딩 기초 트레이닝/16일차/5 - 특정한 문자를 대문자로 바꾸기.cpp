#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    char temp = alp[0];

    for (int i = 0; my_string.size() > i; i++)
    {
        if (my_string[i] == temp)
        {
            answer += toupper(temp);
        }
        else
        {
            answer += my_string[i];
        }
    }

    return answer;
}