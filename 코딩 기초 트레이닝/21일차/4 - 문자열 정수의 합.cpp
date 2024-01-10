#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;

    for (int i = 0; num_str.size() > i; i++)
    {
        answer += num_str[i] - 48;
    }

    return answer;
}