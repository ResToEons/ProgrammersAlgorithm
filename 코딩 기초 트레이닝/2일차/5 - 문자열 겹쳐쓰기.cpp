#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = my_string;

    answer = my_string;

    for (int i = 0; overwrite_string.length() > i; i++)
    {
        answer[i + s] = overwrite_string[i];
    }

    return answer;
}
