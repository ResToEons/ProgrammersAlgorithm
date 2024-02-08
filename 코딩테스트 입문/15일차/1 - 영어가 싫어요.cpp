#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    int startIdx = 0;
    int endIdx = 0;
    string str = "";
    long long answer = 0;

    for (int i = 0; numbers.length() > i;)
    {
        if (numbers[i] == 'z')
        {
            startIdx = i;
            endIdx = i + 3;

            str += "0";
            i = endIdx + 1;
        }
        else if (numbers[i] == 'o')
        {
            startIdx = i;
            endIdx = i + 2;

            str += "1";
            i = endIdx + 1;
        }
        else if (numbers[i] == 't')
        {
            // two, three
            if (numbers[i + 1] == 'w')
            {
                startIdx = i;
                endIdx = i + 2;

                str += "2";
                i = endIdx + 1;
            }
            if (numbers[i + 1] == 'h')
            {
                startIdx = i;
                endIdx = i + 4;

                str += "3";
                i = endIdx + 1;
            }
        }
        else if (numbers[i] == 'f')
        {
            // four, five
            if (numbers[i + 1] == 'o')
            {
                startIdx = i;
                endIdx = i + 3;

                str += "4";
                i = endIdx + 1;
            }
            if (numbers[i + 1] == 'i')
            {
                startIdx = i;
                endIdx = i + 3;

                str += "5";
                i = endIdx + 1;
            }
        }
        else if (numbers[i] == 's')
        {
            // six, seven
            if (numbers[i + 1] == 'i')
            {
                startIdx = i;
                endIdx = i + 2;

                str += "6";
                i = endIdx + 1;
            }
            if (numbers[i + 1] == 'e')
            {
                startIdx = i;
                endIdx = i + 4;

                str += "7";
                i = endIdx + 1;
            }
        }
        else if (numbers[i] == 'e')
        {
            startIdx = i;
            endIdx = i + 4;

            str += "8";
            i = endIdx + 1;
        }
        else if (numbers[i] == 'n')
        {
            startIdx = i;
            endIdx = i + 3;

            str += "9";
            i = endIdx + 1;
        }
        else
        {

        }
    }

    answer = stoull(str);

    return answer;
}