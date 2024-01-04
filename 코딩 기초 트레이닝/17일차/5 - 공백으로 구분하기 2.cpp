#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;

    string temp = "";

    for (int i = 0; my_string.size() > i; i++)
    {
        if (my_string[i] != ' ')
        {
            temp.push_back(my_string[i]);
        }
        else
        {
            if (temp.empty())
            {
                // Do Nothing
            }
            else
            {
                answer.push_back(temp);
            }
            temp = "";
        }
    }

    if (!temp.empty())
        answer.push_back(temp);

    if (answer.empty())
        answer.push_back(my_string);

    return answer;
}