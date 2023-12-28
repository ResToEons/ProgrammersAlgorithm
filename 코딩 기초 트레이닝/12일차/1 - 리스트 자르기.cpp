#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;

    int cnt = 0;
    cin >> n;

    switch (n)
    {
    case 1:
        for (int i = 0; slicer[1] >= i; i++)
        {
            answer.push_back(num_list[i]);
        }
        break;
    case 2:
        for (int i = slicer[0]; num_list.size() - 1 >= i; i++)
        {
            answer.push_back(num_list[i]);
        }
        break;
    case 3:
        for (int i = slicer[0]; slicer[1] >= i; i++)
        {
            answer.push_back(num_list[i]);
        }
        break;
    case 4:
        for (int i = slicer[0]; slicer[1] >= i; i++)
        {
            if (cnt % slicer[2] == 0)
                answer.push_back(num_list[i]);
            else {}
            cnt++;
        }
        break;
    default:
        break;
    }

    return answer;
}