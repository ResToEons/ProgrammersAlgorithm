#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;

    for (int i = 0; code.length() > i; i++)
    {
        if (code[i] == '1')
        {
            if (mode == 0)
                mode = 1;
            else
                mode = 0;
        }
        else if (mode == 0)
        {
            if (i == 0 || i % 2 == 0)
                answer = answer + code[i];
        }
        else
        {
            if (i % 2 == 1)
                answer = answer + code[i];
        }
    }

    if (answer == "")
        answer = "EMPTY";

    return answer;
}