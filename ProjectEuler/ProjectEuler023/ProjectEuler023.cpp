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
    vector<int> ab_vec;

    for (int n = 1; n <= 28123; n++)
    {
        if (calSum(n) > n) ab_vec.push_back(n);
    }

    vector<int> num_vec;

    for (int n = 0; n < 28123; n++)
    {
        num_vec.push_back(n + 1);
    }

    for (int i = 0; i < ab_vec.size(); i++)
    {
        for (int j = i; j < ab_vec.size(); j++)
        {
            if (ab_vec[i] + ab_vec[j] <= 28123)
            {
                for (int n = 0; n < num_vec.size(); n++)
                {
                    if (num_vec[n] == ab_vec[i] + ab_vec[j])
                    {
                        num_vec[n] = 0;
                    }
                }
            }
        }
    }

    int sum = 0;

    for (int k = 0; k < num_vec.size(); k++)
    {
        //cout << num_vec[k] << endl;
        sum += num_vec[k];
    }

    //cout << endl;
    cout << "Answer is : " << sum << endl;

    return 0;
}