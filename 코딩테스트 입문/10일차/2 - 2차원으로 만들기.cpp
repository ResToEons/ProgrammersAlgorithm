#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {

    int row = 0;
    int column = 0;
    int num = 0;

    column = num_list.size() / n;
    row = n;

    vector<vector<int>> answer(column);


    for (int i = 0; column > i; i++)
    {
        for (int j = 0; row > j; j++)
        {
            answer[i].push_back(num_list[num]);
            num++;
        }
    }

    return answer;
}