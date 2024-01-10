#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int temp = 0;

    for (int i = 0; num_list.size() > i; i++)
    {
        for (int j = 0; num_list.size() > j; j++)
        {
            if (num_list[i] < num_list[j])
            {
                temp = num_list[i];
                num_list[i] = num_list[j];
                num_list[j] = temp;
            }
        }
    }

    for (int i = 5; num_list.size() > i; i++)
    {
        answer.push_back(num_list[i]);
    }

    return answer;
}