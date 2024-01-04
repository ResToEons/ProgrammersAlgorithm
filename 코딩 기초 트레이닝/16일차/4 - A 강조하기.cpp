#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string myString) {
    string answer = "";

    for (int i = 0; myString.size() > i; i++)
    {
        if (myString[i] == 'a' || myString[i] == 'A')
        {
            answer += 'A';
        }
        else
        {
            answer += tolower(myString[i]);
        }
    }

    return answer;
}