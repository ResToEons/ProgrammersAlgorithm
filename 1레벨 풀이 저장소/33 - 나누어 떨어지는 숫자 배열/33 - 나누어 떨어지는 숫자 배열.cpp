#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    // Insert into vector<int> answer 
    for (int i = 0; arr.size() > i; i++)
    {
        // Condition: If arr[i] is divide by divisor equal to 0
        if (arr[i] % divisor == 0)
        {
            answer.push_back(arr[i]);
        }
    }

    // Exception: If answer is empty, push_back -1
    if (answer.empty())
        answer.push_back(-1);
    else
    {
        // Sort answer in asc; used #include <algorithm>
        sort(answer.begin(), answer.end());
    }

    return answer;
}