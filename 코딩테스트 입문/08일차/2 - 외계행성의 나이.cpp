#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    int temp;
    char tempChar;

    while (age >= 10)
    {
        temp = age % 10;

        answer.push_back(temp + 97);

        age /= 10;
    }

    temp = age % 10;

    answer.push_back(temp + 97);

    for (int i = 0; (answer.length() / 2) > i; i++)
    {
        tempChar = answer[i];
        answer[i] = answer[answer.length() - 1 - i];
        answer[answer.length() - 1 - i] = tempChar;
    }

    return answer;
}