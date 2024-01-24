#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;

    int cost = 5500;

    answer.push_back(money / cost);
    answer.push_back(money % cost);

    return answer;
}