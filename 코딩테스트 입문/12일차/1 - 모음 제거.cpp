#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";

    for (int i = 0; my_string.length() > i; i++)
    {
        if (my_string[i] == 'a' || my_string[i] == 'e' || my_string[i] == 'i'
            || my_string[i] == 'o' || my_string[i] == 'u')
        {

        }
        else
        {
            answer += my_string[i];
        }
    }

    return answer;
}