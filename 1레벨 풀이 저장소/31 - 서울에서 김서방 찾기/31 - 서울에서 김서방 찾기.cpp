#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int idx = 0;

    for (int i = 0; seoul.size() > i; i++)
    {
        if (seoul[i] == "Kim")
        {
            idx = i;
            break;
        }
    }

    answer = "�輭���� " + to_string(idx) + "�� �ִ�";

    return answer;
}