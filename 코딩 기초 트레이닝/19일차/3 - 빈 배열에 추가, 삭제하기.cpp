#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;

    for (int j = 0; flag.size() > j; j++)
    {
        if (flag[j] == true)
        {
            for (int k = 0; arr[j] * 2 > k; k++)
            {
                answer.push_back(arr[j]);
            }
        }
        else // flag[j] == false
        {
            for (int k = 0; arr[j] > k; k++)
                answer.pop_back();
        }
    }



    return answer;
}