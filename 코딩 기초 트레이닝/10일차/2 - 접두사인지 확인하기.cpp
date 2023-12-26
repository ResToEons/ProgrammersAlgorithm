#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;

    string temp = "";

    for (int i = 0; my_string.length() > i; i++)
    {
        temp += my_string[i];
        if (temp == is_prefix)
        {
            answer = 1;
            break;
        }
    }

    return answer;
}