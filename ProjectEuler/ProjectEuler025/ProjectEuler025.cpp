#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> numVec_1(334), numVec_2(334), numVec_3(334);

    int count = 3;

    numVec_1[0] = 1;
    numVec_2[0] = 1;

    while (numVec_3[333] == 0)
    {
        numVec_3.assign(334, 0);
        
        for (int n = 0; n < 334; n++)
        {
            numVec_3[n] = numVec_1[n] + numVec_2[n];
        }

        for (int n = 0; n < 333; n++)
        {
            if (numVec_3[n] >= 1000)
            {
                numVec_3[n] -= 1000;
                numVec_3[n + 1]++;
            }
        }

        for (int n = 0; n < 334; n++)
        {
            numVec_1[n] = numVec_2[n];
            numVec_2[n] = numVec_3[n];
        }

        count++;
    }

    /*for (int n = 0; n < numVec_3.size(); n++)
    {
        cout << numVec_3[n] << " ";
    }
    cout << endl;
    cout << endl;*/

    cout << "Answer is : " << count-1 << endl;

    return 0;
}