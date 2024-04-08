#include <string>
#include <vector>
#include <algorithm>
#define MAX_SIZE 10

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int difSize = MAX_SIZE - numbers.size();

    // To make numbers' size to 10, push_back -1 to fill out the size
    for (int i = 0; difSize > i; i++)
    {
        numbers.push_back(-1);
    }

    for (int i = 0; numbers.size() > i; i++)
    {
        // If i exist in numbers,
        if (find(numbers.begin(), numbers.end(), i) != numbers.end())
        {
            // Do Nothing
        }
        else // If i does not exist in numbers
        {
            // Sum i to answer
            answer += i;
        }
    }


    return answer;
}