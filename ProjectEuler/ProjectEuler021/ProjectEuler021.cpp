#include <iostream>
#include <vector>

using namespace std;

int calSum(int num)
{
    if (num == 1)
        return 0;
    else
    {
        vector<int> vec;

        int n = 2;
        int sum = 0;

        vec.clear();
        vec.push_back(1);

        for (int n = 2; n <= (num / 2); n++)
        {
            if (num % n == 0)
            {
                vec.push_back(n);
                vec.push_back(num / n);
            }
        }

        for (int i = 0; i < (int)((vec.size() / 2) + 1); i++)
        {
            sum += vec[i];
        }

        return sum;
    }
}

int main()
{
    int sum = 0;

    for (int n = 2; n <= 10000; n++)
    {
        if (calSum(calSum(n)) == n && calSum(n) != n)
        {
            //cout << n << " " << calSum(n) << endl;
            sum += n;
        }
    }

    cout << "Answer is : " << sum << endl;

    return 0;
}
