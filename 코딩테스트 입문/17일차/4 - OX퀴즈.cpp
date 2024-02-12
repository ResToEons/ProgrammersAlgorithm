#include <string>
#include <vector>
#include <sstream>
#define SPACE_CNT 100

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    char equation = '+';
    int* spaceCnt = new int[100];
    int spaceIdx = 0;
    int equalIdx = 0;
    int firstNum = 0;
    int secondNum = 0;
    int thirdNum = 0;
    string temp = "";

    for (int i = 0; quiz.size() > i; i++)
    {
        for (int k = 0; quiz[i].length() > k; k++)
        {
            if (quiz[i][k] == ' ')
            {
                spaceCnt[spaceIdx] = k;
                spaceIdx++;
            }
            if (quiz[i][k] == '=')
            {
                equalIdx = k;
            }
        }

        for (int l = 0; spaceCnt[0] > l; l++)
        {
            temp += quiz[i][l];
        }

        firstNum = stoi(temp);
        temp = "";

        for (int m = spaceCnt[0] + 1; spaceCnt[1] > m; m++)
        {
            if (quiz[i][m] == '+')
            {
                equation = '+';
            }
            if (quiz[i][m] == '-')
            {
                equation = '-';
            }
        }

        for (int n = spaceCnt[1] + 1; spaceCnt[2] > n; n++)
        {
            temp += quiz[i][n];
        }

        secondNum = stoi(temp);
        temp = "";

        for (int q = equalIdx + 1; quiz[i].length() > q; q++)
        {
            temp += quiz[i][q];
        }

        thirdNum = stoi(temp);
        temp = "";

        if (equation == '+')
        {
            if (firstNum + secondNum == thirdNum)
            {
                answer.push_back("O");
            }
            else
            {
                answer.push_back("X");
            }
        }
        if (equation == '-')
        {
            if (firstNum - secondNum == thirdNum)
            {
                answer.push_back("O");
            }
            else
            {
                answer.push_back("X");
            }
        }

        spaceIdx = 0;
        equalIdx = 0;
        equation = '+';
        firstNum = 0;
        secondNum = 0;
        thirdNum = 0;

        for (int i = 0; SPACE_CNT > i; i++)
        {
            spaceCnt[i] = 0;
        }

    }

    return answer;
}