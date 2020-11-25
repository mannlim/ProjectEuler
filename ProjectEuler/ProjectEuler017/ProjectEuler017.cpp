#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int _array[30]
{
    3,  //one   1   0
    3,  //two   2   1
    5,  //three 3   2
    4,  //four  4   3
    4,  //five  5   4
    3,  //six   6   5
    5,  //seven 7   6
    5,  //eight 8   7
    4,  //nine  9   8
    3,  //ten   10  9
    6,  //eleven    11  10
    6,  //twelve   12  11
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
    8,  //thousand  1000    28
    3   //and   0   29
};

int main()
{
    int num = 19;
    int _num = num;
    int num_length = log10(_num) + 1;
    vector<int> vec;

    for (int i = num_length - 1; i >= 0; i--)
    {
        
        vec.push_back(_num % 10);
        _num /= 10;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    int count = 0;

    if (vec[1] == 1)
    {
        count += _array[10 + vec[0] - 1];

    }
    if (vec[1] != 1 && vec[0] != 0)
    {
        count += _array[vec[0] - 1];
    }
    

    cout << "Answer is : " << num << " / " << count << endl;



    // 342 : three hundred and forty two -> 5 + 7 + 3 + 5 + 3 = 23



    
    
    return 0;
}
