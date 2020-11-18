#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> pal;

    for (int a = 100; a < 1000; a++)
    {
        for (int b = a; b < 1000; b++)
        {
            int num = a * b;
            int r_num = num;
            int count = log10(num);

            vector<int> vec(count + 1);

            for (int i = count; i >= 0; i--)
            {
                vec[i] = num % 10;
                num /= 10;
            }

            if (vec[0] == vec[count] && vec[1] == vec[count - 1] && vec[2] == vec[count - 2])
            {
                pal.push_back(r_num);
                //cout << r_num << endl;
            }
        }
    }

    int max = *max_element(pal.begin(), pal.end());
    cout << "Answer is : " << max << endl;

    return 0;
}