#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    char temp = 'a';
    int cnt = 0;

    answer = my_string;

    for (int i = 0; (e - s) / 2 >= i; i++)
    {
        temp = answer[s + i];

        answer[s + i] = answer[e - i];
        answer[e - i] = temp;
    }

    return answer;
}