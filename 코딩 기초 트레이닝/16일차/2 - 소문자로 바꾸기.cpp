#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    string answer = "";

    answer = myString;

    for (int i = 0; myString.size() > i; i++)
        answer[i] = tolower(myString[i]);

    return answer;
}