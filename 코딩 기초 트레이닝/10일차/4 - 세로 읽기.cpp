#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";

    vector<string> container;

    int x = m;
    int y = my_string.length() / m;

    for (int i = 0; y > i; i++)
    {
        answer += my_string[i * m + c - 1];
    }

    return answer;
}