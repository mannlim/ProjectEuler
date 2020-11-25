#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count = 0;
    int sum = 0;
    int space = 500;

    vector<int> num_vec(space);
    num_vec[0] = 1;
    
    while (count < 1000)
    {
        for (int i = (space-1); i >= 0; i--)
        {
            if (num_vec[i] * 2 < 10)
            {
                num_vec[i] *= 2;
            }
            else
            {
                num_vec[i] = (num_vec[i] * 2) % 10;
                num_vec[i + 1] += 1;
            }
        }
        count++;
    }

    for (int i = 0; i < num_vec.size(); i++)
    {
        sum += num_vec[i];
        //cout << num_vec[i] << endl;
    }

    cout << "Answer is : " << sum << endl;

    return 0;
}