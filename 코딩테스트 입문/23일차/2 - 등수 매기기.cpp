#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size());
    vector<double> abc;
    vector<double> avgV;
    vector<int> idxV;
    double avg = 0;
    int max = -1;
    int rank = 1;
    int idx = 0;
    double temp = 0;

    for (int i = 0; score.size() > i; i++)
    {
        avg = double((score[i][0] + score[i][1]) / 2.0);
        avgV.push_back(avg);
    }

    abc = avgV;

    for (int i = 0; score.size() > i; i++)
    {
        max = -1;

        for (int j = i; score.size() > j; j++)
        {
            if (max < avgV[j])
            {
                max = avgV[j];
                idx = j;
                idxV.push_back(idx);
            }
        }

        temp = avgV[idx];
        avgV[idx] = avgV[i];
        avgV[i] = temp;
    }

    for (int i = 0; score.size() > i; i++)
    {
        for (int j = 0; score.size() > j; j++)
        {
            if (avgV[i] == abc[j])
            {
                if (answer[j] == 0)
                    answer[j] = rank;
            }
        }

        rank++;
    }

    return answer;
}