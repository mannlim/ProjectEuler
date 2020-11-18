#include <iostream>

using namespace std;

int main()
{
    int num = 20;
    int i = 2;

    while(i <= 20)
    {
        if (num % i == 0)
        {
            i++;
        }
        else
        {
            num++;
            i = 2;
        }
    }
    cout << "Answer is : " << num << endl;

    return 0;
}