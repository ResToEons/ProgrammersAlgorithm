#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";

    for (int i = 0; index_list.size() > i; i++)
    {
        answer += my_string[index_list[i]];
    }

    return answer;
}