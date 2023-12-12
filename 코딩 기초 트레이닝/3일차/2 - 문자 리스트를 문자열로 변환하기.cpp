#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    int arrLength;
    string answer = "";

    arrLength = arr.size();

    for (int i = 0; arrLength > i; i++)
    {
        answer = answer + arr[i];
    }

    return answer;
}