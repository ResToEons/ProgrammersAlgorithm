#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";

    for (int i = 0; my_string.length() > i; i++)
    {
        for (int j = 0; n > j; j++)
        {
            answer.push_back(my_string[i]);
        }
    }

    return answer;
}