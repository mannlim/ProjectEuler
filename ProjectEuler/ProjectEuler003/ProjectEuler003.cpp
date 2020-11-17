#include <iostream>

using namespace std;

int main()
{
    __int64 num = 600851475143;
    int i = 2;

    while (num != 1)
    {
        if (num % i == 0)
        {
            num /= i;
            //cout << i << "\t" << num << endl;
        }
        else
            i++;
    }
    cout << "Answer is : " << i << endl;

    return 0;
}
