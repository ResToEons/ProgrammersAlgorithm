#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    string temp = "";
    int xSum = 0;
    int consSum = 0;
    int num = 0;

    stringstream stream(polynomial);

    while (stream >> temp)
    {
        if (temp == "x")
        {
            xSum++;
        }
        else if (temp.find("x") != string::npos)
        {
            temp.erase(temp.find("x"));

            num = stoi(temp);

            xSum += num;
        }
        else if (temp.find("+") != string::npos)
        {
            // Do Nothing
        }
        else
        {
            num = stoi(temp);

            consSum += num;
        }
    }

    if (xSum != 0)
    {
        if (xSum == 1)
        {

        }
        else
            answer += to_string(xSum);
        answer += "x";
    }
    if (consSum != 0)
    {
        if (xSum == 0)
            answer += to_string(consSum);
        else
        {
            answer += " + ";
            answer += to_string(consSum);
        }
    }

    return answer;
}