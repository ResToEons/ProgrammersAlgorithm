#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {

	int strLength;
	string answer = "";

	if (str1.length() > 10 || str1.length() < 1)
		return "";
	if (str2.length() > 10 || str2.length() < 1)
		return "";
	if (str1.length() != str2.length())
		return "";

	strLength = str1.length() + str2.length();

	for (int i = 0; strLength > i; i++)
	{
		if (i == 0 || i % 2 == 0)
		{
			answer.insert(i, 1, str1[i / 2]);
		}
		else
		{
			answer.insert(i, 1, str2[i / 2]);
		}
	}

	return answer;
}