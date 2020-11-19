#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num_i = 0;
    int num_j = 0;
    int num_k = 0;

    for (int i = 1; i <= 100; i++)
    {
        num_i += i;
    }
    num_i = pow(num_i, 2);

    for (int j = 1; j <= 100; j++)
    {
        num_j += pow(j, 2);
    }

    num_k = abs(num_i - num_j);

    //cout << num_i << endl;
    //cout << num_j << endl;
    cout << num_k << endl;

    return 0;
}