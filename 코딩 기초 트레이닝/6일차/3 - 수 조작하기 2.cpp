#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";

    for (int i = 0; numLog.size() > i; i++)
    {
        if (i == 0)
        {
            // skip
        }

        else
        {
            if (numLog[i - 1] + 1 == numLog[i])
                answer += "w";
            else if (numLog[i - 1] - 1 == numLog[i])
                answer += "s";
            else if (numLog[i - 1] + 10 == numLog[i])
                answer += "d";
            else if (numLog[i - 1] - 10 == numLog[i])
                answer += "a";
            else
            { // Bug}
            }
        }
    }
    return answer;
}