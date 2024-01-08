#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;

    string temp = "";
    string EMPTY = "EMPTY";
    for (int i = 0; myStr.size() > i; i++)
    {
        if (myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c')
        {
            if (temp == "")
            {

            }
            else
            {
                answer.push_back(temp);
                temp = "";
            }
        }
        else
        {
            temp += myStr[i];
        }
    }

    if (!temp.empty())
        answer.push_back(temp);

    if (answer.empty())
        answer.push_back(EMPTY);

    return answer;
}