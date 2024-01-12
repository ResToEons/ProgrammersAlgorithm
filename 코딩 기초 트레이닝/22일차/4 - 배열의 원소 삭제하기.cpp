#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    bool isDelete = false;

    for (int i = 0; arr.size() > i; i++)
    {
        for (int j = 0; delete_list.size() > j; j++)
        {
            if (arr[i] == delete_list[j])
            {
                isDelete = true;
            }
            else
            {
                // Do Nothing
            }
        }

        if (!isDelete)
        {
            answer.push_back(arr[i]);
        }
        else
        {
            isDelete = false;
        }
    }

    return answer;
}