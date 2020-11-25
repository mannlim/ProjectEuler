#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long i = 1;
    int max_value = 0;
    vector<long long> num_vec;
    num_vec.clear();
    vector<int> count_vec;
    count_vec.clear();

    while (i <= 1000000)
    {
        long long j = i;
        int count = 0;

        while (true)
        {
            if (j == 1)
                break;
            else if (j % 2 == 0)
            {
                j = j / 2;
            }
            else
            {
                j = 3 * j + 1;
            }

            count++;
        }
        cout << i << " : " << count << endl;

        num_vec.push_back(i);
        count_vec.push_back(count);

        max_value = max(max_value, count_vec[i-1]);
        i++;
    }

    int l = 0;
    while (true)
    {
        if (count_vec[l] == max_value)
            break;
        l++;
    }

    cout << "Answer is : " << num_vec[l] << " / " << count_vec[l] << endl;

    return 0;
}
