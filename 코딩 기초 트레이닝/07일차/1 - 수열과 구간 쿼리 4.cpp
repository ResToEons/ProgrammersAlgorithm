#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
	vector<int> answer;

	for (int j = 0; queries.size() > j; j++)
	{
		for (int i = queries[j][0]; queries[j][1] >= i; i++)
		{
			if (i % queries[j][2] == 0)
			{
				arr[i] += 1;
			}
		}
	}

	answer = arr;

	return answer;
}