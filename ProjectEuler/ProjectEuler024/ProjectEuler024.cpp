#include <iostream>
#include <vector>

using namespace std;

int factorial(int num)
{
    int result = 1;

    if (num < 0) return 0;
    else if (num == 0) return result;
    else
    {
        for (int i = 1; i <= num; i++)
        {
            result = result * i;
        }
        return result;
    }
}

int main()
{
    vector<int> numVec = { 0,1,2,3,4,5,6,7,8,9 };
    vector<int> conVec;

    int count = 1000000;

    for (int k = 1; k <= 10; k++)
    {
        //cout << factorial(numVec.size() - 1) << endl;

        int n = 0;

        while (count > factorial(numVec.size() - 1)) // 9! ~ 1!
        {
            if (count > factorial(numVec.size() - 1))
            {
                count -= factorial(numVec.size() - 1);

                //cout << k << " " << numVec[n] << " " << count << endl;

                n++;
            }
            else
                break;
        }

        conVec.push_back(numVec[n]);
        numVec.erase(numVec.begin() + n);

        //cout << endl;
        //cout << endl;
    }

    cout << "Answer is : ";

    for (int i = 0; i < conVec.size(); i++)
    {
        cout << conVec[i];
    }

    cout << endl;

    return 0;
}