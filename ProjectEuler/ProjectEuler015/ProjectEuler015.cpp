#include <iostream>

using namespace std;

long long comb(const int n, const int r)
{
    long long** comb_array = new long long* [n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        comb_array[i] = new long long[r + 1] ;
    }

    for (int _n = 0; _n < n+1; _n++)
    {
        for (int _r = 0; _r < r+1; _r++)
        {
            if (_r > _n)
            {
                comb_array[_n][_r] = 0;
            }
            else if (_n == _r || _r == 0)
            {
                comb_array[_n][_r] = 1;
            }
            else
            {
                comb_array[_n][_r] = comb_array[_n - 1][_r - 1] + comb_array[_n - 1][_r];
            }

            //cout << comb_array[_n][_r] << " ";
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