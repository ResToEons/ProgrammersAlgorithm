#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n);

    for (int y = 0; n > y; y++)
    {
        for (int x = 0; n > x; x++)
        {
            if (y == x)
            {
                answer[y].push_back(1);
            }
            else
            {
                answer[y].push_back(0);
            }
        }
    }

    return answer;
}