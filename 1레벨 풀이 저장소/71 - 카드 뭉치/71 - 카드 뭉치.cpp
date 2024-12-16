#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; goal.size() > i; i++)
    {
        //cout << cards1[cnt1] << " " << cards2[cnt2] << "\n";

        if (goal[i] == cards1[cnt1])
        {
            //cards1[0].erase();
            cnt1++;
        }
        else if (goal[i] == cards2[cnt2])
        {
            //cards2[cnt2].erase();
            cnt2++;
        }
        else
        {
            answer = "No";
            break;
        }
    }

    if (answer != "No")
        answer = "Yes";

    return answer;
}