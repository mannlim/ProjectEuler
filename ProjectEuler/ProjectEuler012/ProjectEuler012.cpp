#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 1;
    int num = 0;
    int count_con = 0;

    while (true)
    {
        vector<int> div_vec;
        div_vec.clear();
        num += n;
        int num_copy = num;
        int count_ = 1;

        if (num == 1)
        {
            count_ = 1;
            //cout << num << " : \t" << count_ << endl;
        }

        else
        {
            int i = 2;

            while (i <= num_copy)
            {
                if (num_copy == 1)
                    break;
                if (num_copy % i != 0)
                    i++;
                else
                {
                    div_vec.push_back(i);
                    num_copy /= i;
                }
            }

            // check_1
            /*for (int m = 0; m < div_vec.size(); m++)
            {
                cout << div_vec[m] << " ";
            }
            cout << endl;*/

            int j = 0;

            vector<int> cnt_vec;
            cnt_vec.clear();

            while (j < div_vec.size())
            {
                int cnt = 0;
                cnt = count(div_vec.begin(), div_vec.end(), div_vec[j]);
                if (div_vec[j] != div_vec[j+1])
                {
                    cnt_vec.push_back(cnt);
                }
                j++;
            }

            // check_2
            /*for (int m = 0; m < cnt_vec.size(); m++)
            {
                cout << cnt_vec[m] << " ";
            }
            cout << endl;*/

            for (int k = 0; k < cnt_vec.size(); k++)
            {
                count_ *= (cnt_vec[k] + 1);
            }

            //cout << num << " : \t" << count_ << endl;
        }
        count_con = count_;

        if (count_ >= 500)
            break;

        n++;
    }
    cout << "Answer is : " << num << " / " << count_con << endl;

    return 0;
}

// trial_2

//int main()
//{
//    int n = 1;
//    int num = 0;
//    int count_con = 0;
//    
//    while (true)
//    {
//        vector<int> div_vec;
//        div_vec.clear();
//        num += n;
//        int num_copy = num;
//        int count_ = 1;
//        
//        if (num == 1)
//        {
//            count_ = 1;
//            //cout << num << " : \t" << count_ << endl;
//        }
//
//        else
//        {
//            int i = 2;
//
//            while (i <= num_copy)
//            {
//                if (num_copy == 1)
//                    break;
//                if (num_copy % i != 0)
//                    i++;
//                else
//                {
//                    div_vec.push_back(i);
//                    num_copy /= i; 
//                }
//            }
//
//            // check_1
//            /*for (int m = 0; m < div_vec.size(); m++)
//            {
//                cout << div_vec[m] << " ";
//            }
//            cout << endl;*/
//
//            int j = 2;
//            
//            vector<int> cnt_vec;
//            cnt_vec.clear();
//
//            while (j <= num)
//            {
//                int cnt = 0;
//                cnt = count(div_vec.begin(), div_vec.end(), j);
//                if (cnt != 0)
//                {
//                    cnt_vec.push_back(cnt);
//                }
//                j++;
//            }
//
//            // check_2
//            /*for (int m = 0; m < cnt_vec.size(); m++)
//            {
//                cout << cnt_vec[m] << " ";
//            }
//            cout << endl;*/
//
//            for (int k = 0; k < cnt_vec.size(); k++)
//            {
//                count_ *= (cnt_vec[k] + 1);
//            }
//            
//            //cout << num << " : \t" << count_ << endl;
//        }
//        count_con = count_;
//
//        if (count_ >= 500)
//            break;
//
//        n++;
//    }
//    cout << "Answer is : " << num << " / " << count_con << endl;
//
//    return 0;
//}


// trial_1

//int main()
//{
//    int n = 1;
//    int num = 0;
//    int count = 0;
//
//    while (true)
//    {
//        num += n;
//
//        for (int i = 1; i <= num; i++)
//        {
//            if (num % i == 0)
//                count++;
//        }
//
//       // cout << num << " : \t" << count << endl;
//
//        if (count >= 500)
//            break;
//        else
//            count = 0;
//
//        n++;
//    }
//    cout << "Answer is : "<< num << " / " << count << endl;
//
//    return 0;
//}
