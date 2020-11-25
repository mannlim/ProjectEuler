#include <iostream>

using namespace std;

long long comb(const int n, const int r)
{
    long long** comb_array = new long long* [n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        comb_array[i] = new long long[r + 1] ;
    }

    for (int m = 0; m < n+1; m++)
    {
        for (int q = 0; q < r+1; q++)
        {
            if (q > m)
            {
                comb_array[m][q] = 0;
            }
            else if (m == q || q == 0)
            {
                comb_array[m][q] = 1;
            }
            else
            {
                comb_array[m][q] = comb_array[m - 1][q - 1] + comb_array[m - 1][q];
            }

            //cout << comb_array[m][q] << " ";
        }
        //cout << endl;
    }

    return comb_array[n][r];
}

int main()
{
    cout << "Answer is : " << comb(40, 20) << endl;

    return 0;
}


//trial 1

//long long comb(int n, int r)
//{
//    if (n == r || r == 0)
//        return 1;
//    else
//        return comb(n - 1, r - 1) + comb(n - 1, r);
//}