#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int c, num = 0;

    for (int a = 1; a <= 1000; a++)
    {
        for (int b = 1; b <= 1000; b++)
            if (pow(1000 - a - b, 2) == (pow(a, 2) + pow(b, 2)))
            {
                c = 1000 - a - b;
                num = a * b * c;
                //cout <<"a : " << a << " , b : " << b << " , c : " << c << endl;              
            }
        if (num != 0)
            break;
    }

    cout << "Answer is : " << num << endl;

    return 0;
}