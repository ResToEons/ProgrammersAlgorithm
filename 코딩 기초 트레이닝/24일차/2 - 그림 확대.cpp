#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string temp = "";
    int num = 0;
    for (int i = 0; picture.size() > i; i++)
    {
        for (int j = 0; picture[i].size() > j; j++)
        {
            for (int l = 0; k > l; l++)
            {
                temp += picture[i][j];
            }
        }

        for (int l = 0; k > l; l++)
        {
            answer.push_back(temp);
        }

        temp = "";
    }

    return answer;
}