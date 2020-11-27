#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int _array[30]
{
    3,  //one       1   0
    3,  //two       2   1
    5,  //three     3   2
    4,  //four      4   3
    4,  //five      5   4
    3,  //six       6   5
    5,  //seven     7   6
    5,  //eight     8   7
    4,  //nine      9   8
    3,  //ten       10  9
    6,  //eleven    11  10
    6,  //twelve    12  11
    8,  //thirteen  13  12
    8,  //fourteen  14  13
    7,  //fifteen   15  14
    7,  //sixteen   16  15
    9,  //seventeen 17  16
    8,  //eighteen  18  17
    8,  //nineteen  19  18
    6,  //twenty    20  19
    6,  //thirty    30  20
    5,  //forty     40  21
    5,  //fifty     50  22
    5,  //sixty     60  23
    7,  //seventy   70  24
    6,  //eighty    80  25
    6,  //ninety    90  26
    7,  //hundred   100 27
    3,  //and       0   28
    8  //thousand   1000    29
};

int Alphabet(int num)
{
    int _num = num;
    int num_length = log10(_num) + 1;
    vector<int> vec;

    for (int i = num_length - 1; i >= 0; i--)
    {
        vec.push_back(_num % 10);
        _num /= 10;
    }

    for (int i = vec.size(); i < 4; i++)
    {
        vec.push_back(0);
    }

    /*for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }*/

    //cout << endl;

    int count = 0;

    if (vec[1] == 1)                            // 10 ~ 19
    {
        count += _array[10 + vec[0] - 1];
    }

    if (vec[1] != 1)
    {
        if (vec[0] != 0)
        {
            count += _array[vec[0] - 1];        // 1 ~ 9
        }
        else 
        {
            count = 0;                          // delete 20,30,40,50,60,70,80,90 
        }

        for (int i = 2; i < 10; i++)            // 20 ~ 99
        {
            if (vec[1] == i) count += _array[i + 17];
        }
    }
  
    if (vec[2] != 0)
    {
        if (vec[1] == 0 && vec[0] == 0)          //100, 200, 300 ...
        {
            for (int i = 1; i < 10; i++)
            {
                if (vec[2] == i) count = _array[i-1] + _array[27];
            }
        }
        else                                    // 101 ~ 199, ... 901 ~ 999
        {
            count += _array[vec[2] - 1] + _array[27] + _array[28];
        }
    }

    if (vec[3] != 0)                            // 1000
    {
        count = _array[0] + _array[29];
    }

    return count;
}


int main()
{
    /*int num = 342;
    int length = Alphabet(num);
    
    cout << "Number Length : " << num << " / " << length << endl;*/

    int con = 0;

    for (int num = 1; num <= 1000; num++)
    {
        con += Alphabet(num);
        //cout << num << " : " << Alphabet(num) << endl;
    }

    cout << "Answer is : " << con << endl;
    
    return 0;
}
