#include <string>
#include <vector>
#define SIZE 6
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    float diagArr[SIZE];

    diagArr[0] = float((dots[0][1] - dots[1][1])) / float((dots[0][0] - dots[1][0]));
    diagArr[1] = float((dots[0][1] - dots[2][1])) / float((dots[0][0] - dots[2][0]));
    diagArr[2] = float((dots[0][1] - dots[3][1])) / float((dots[0][0] - dots[3][0]));
    diagArr[3] = float((dots[1][1] - dots[2][1])) / float((dots[1][0] - dots[2][0]));
    diagArr[4] = float((dots[1][1] - dots[3][1])) / float((dots[1][0] - dots[3][0]));
    diagArr[5] = float((dots[2][1] - dots[3][1])) / float((dots[2][0] - dots[3][0]));

    if (diagArr[0] == diagArr[5])
        answer = 1;
    if (diagArr[1] == diagArr[4])
        answer = 1;
    if (diagArr[2] == diagArr[3])
        answer = 1;

    return answer;
}