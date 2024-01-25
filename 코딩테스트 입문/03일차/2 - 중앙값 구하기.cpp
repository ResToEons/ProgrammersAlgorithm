#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int temp = -1;

    for (int i = 0; array.size() > i; i++)
    {
        for (int j = 0; array.size() > j; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    answer = array[array.size() / 2];

    return answer;
}