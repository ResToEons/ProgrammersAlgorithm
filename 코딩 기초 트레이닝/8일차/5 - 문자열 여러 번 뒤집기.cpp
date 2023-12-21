#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    char temp = 'a';
    int cnt = 0;

    answer = my_string;

    for (int i = 0; queries.size() > i; i++)
    {
        for (int j = queries[i][0]; (queries[i][1] + queries[i][0]) / 2 >= j; j++)
        {
            temp = answer[j];

            answer[j] = answer[queries[i][1] - cnt];
            answer[queries[i][1] - cnt] = temp;

            cnt++;
        }

        cnt = 0;
    }

    return answer;
}