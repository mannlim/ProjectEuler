#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    int check = 1;

    for (int num = 2;; num++)
    {
        for (int i = 1; i < num + 1; i++)
        {
            if (num % i == 0)
            {
                count += 1;
            }
        }
        if (count == 2)
        {
            cout <<check << "\t" << num << endl;
            if (check == 10001)
            {
                cout << "Answer is : " << num << endl;
                break;
            }
            check++;
        }
        count = 0;
    }
    
    return 0;
}