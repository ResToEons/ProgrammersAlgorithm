#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {

    int strLength = my_string.length();
    string answer = "";
    char temp;

    answer = my_string;

    temp = my_string[num1];
    answer[num1] = answer[num2];
    answer[num2] = temp;


    return answer;
}