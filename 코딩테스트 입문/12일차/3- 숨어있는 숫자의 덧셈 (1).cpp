#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;

    for (int i = 0; my_string.length() > i; i++)
    {
        if (isdigit(my_string[i]) != 0)
        {
            answer += ((my_string[i]) - 48);
        }
    }

    return answer;
}