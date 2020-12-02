#include <iostream>

using namespace std;

int check_feb(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 29;
    else
        return 28;
}

int main()
{
    int day_array[101][12];

    for (int year = 0; year < 101; year++)
    {
        for (int mon = 0; mon < 12; mon++)
        {
            if (mon == 3 || mon == 5 || mon == 8 || mon == 10)
            {
                day_array[year][mon] = 30;
            }
            if (mon == 0 || mon == 2 || mon == 4 || mon == 6 || mon == 7 || mon == 9 || mon == 11)
            {
                day_array[year][mon] = 31;
            }
            if (mon == 1)
            {
                day_array[year][mon] = check_feb(1900 + year);
            }
            cout << day_array[year][mon] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    int sum = 0;
    int count = 0;

    for (int mon = 0; mon < 12; mon++)
    {
        sum += day_array[0][mon];
    }

    for (int year = 1; year < 101; year++)
    {
        for (int mon = 0; mon < 12; mon++)
        {
            if ((sum + 1) % 7 == 0)
            {
                count += 1;
            }
            sum += day_array[year][mon];
        }
    }

    cout << "Answer is : " << count << endl;
        
    return 0;
}
