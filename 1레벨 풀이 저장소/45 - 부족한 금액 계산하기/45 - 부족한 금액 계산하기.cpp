using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long longMoney = money;

    for (long long i = 1; count >= i; i++)
    {
        longMoney -= price * i;

        if (longMoney >= 0)
        {

        }
        else
        {
            answer = (longMoney * -1);
        }
    }

    if (answer == -1)
        answer = 0;

    return answer;
}