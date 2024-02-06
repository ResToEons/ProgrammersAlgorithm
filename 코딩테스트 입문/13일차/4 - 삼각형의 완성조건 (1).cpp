#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int maxSize = 0;
    int minSize = 0;
    int idx = 0;

    for (int i = 0; sides.size() > i; i++)
    {
        if (sides[i] > maxSize)
        {
            maxSize = sides[i];
            idx = i;
        }
    }

    switch (idx)
    {
    case 0:
        minSize = sides[1] + sides[2];
        if (maxSize < minSize)
            answer = 1;
        else
            answer = 2;
        break;
    case 1:
        minSize = sides[0] + sides[2];
        if (maxSize < minSize)
            answer = 1;
        else
            answer = 2;
        break;
    case 2:
        minSize = sides[0] + sides[1];
        if (maxSize < minSize)
            answer = 1;
        else
            answer = 2;
        break;
    }


    return answer;
}