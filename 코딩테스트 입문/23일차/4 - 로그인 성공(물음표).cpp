#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    int idx = -1;

    for (int i = 0; db.size() > i; i++)
    {
        if (id_pw[0] == db[i][0])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        answer = "fail";
    }
    else
    {
        if (id_pw[1] == db[idx][1])
        {
            answer = "login";
        }
        else
        {
            answer = "wrong pw";
        }
    }

    return answer;
}