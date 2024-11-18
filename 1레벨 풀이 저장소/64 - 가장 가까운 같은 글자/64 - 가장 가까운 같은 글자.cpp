#include <string>
#include <vector>
#include <iostream>
#define ALPHA_NUM 26

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int* alpha_check = new int[ALPHA_NUM];
    int temp;

    for (int i = 0; ALPHA_NUM > i; i++)
    {
        alpha_check[i] = -1;
    }

    for (int i = 0; s.length() > i; i++)
    {
        temp = s[i] - 97;

        if (alpha_check[temp] == -1)
        {
            answer.push_back(-1);

            alpha_check[temp] = i;
        }
        else
        {
            int idxDif = i - alpha_check[temp];

            answer.push_back(idxDif);

            alpha_check[temp] = i;
        }
    }

    return answer;
}