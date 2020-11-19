#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long num = 2000000;
    long long sum = 0;

    vector<long long> era;

    for (long long i = 1; i <= num; i++)
    {
        era.push_back(i);
    }

    era[0] = 0; // era[0] = 1 -> 0

    for (long long j = 1; j < num; j++)
    {
        if (era[j] != 0)
        {
            for (long long k = (j + 1) * 2; k <= num; k += (j + 1))
            {
                era[k - 1] = 0;
            }
            sum += era[j];
            //cout << j + 1 << " :\t" << era[j] << endl;
        }
    }

    cout << "Answer is : " << sum << endl;

    return 0;
}

// trial1

//int main()
//{
//    int count = 0;
//    long long con = 0;
//    vector<long long> num_vec;
//
//    for (long long num = 2; num <= 2000000; num++)
//    {
//        for (long long i = 1; i <= num; i++)
//        {
//            if (num % i == 0)
//            {
//                count += 1;
//            }
//            if (count > 2)
//                break;
//        }
//        if (count == 2)
//        {
//            num_vec.push_back(num);
//            //cout << num << endl;
//        }
//        count = 0;
//    }
//
//    int end_num = num_vec.size();
//
//    for (int i = 0; i < end_num; i++)
//    {
//        con += num_vec[i];
//    }
//    cout << "Answer is : " << con << endl;
//
//    return 0;
//}