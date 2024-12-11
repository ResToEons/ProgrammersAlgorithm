#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    int sum = 0;

    for (int i = 0; photo.size() > i; i++)
    {
        for (int j = 0; photo[i].size() > j; j++)
        {
            for (int k = 0; name.size() > k; k++)
            {
                if (photo[i][j] == name[k])
                {
                    sum += yearning[k];
                }
            }
        }

        answer.push_back(sum);

        sum = 0;
    }

    return answer;
}