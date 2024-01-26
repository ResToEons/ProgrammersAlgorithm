#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";

    for (int i = 0; my_string.length() > i; i++)
    {
        if (my_string[i] != letter[0])
            answer.push_back(my_string[i]);
    }

    return answer;
}