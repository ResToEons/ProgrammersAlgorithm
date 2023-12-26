#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";

    for (int i = 0; k > i; i++)
    {
        answer += my_string;
    }

    return answer;
}