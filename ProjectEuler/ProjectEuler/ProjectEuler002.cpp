#include <iostream>

using namespace std;

int fibo(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int result = 0;
	int i = 1;

	while (fibo(i) <= 4000000)
	{
		if (fibo(i) % 2 == 0)
		{
			result += fibo(i);
			//cout << i << " " << fibo(i) << " " << result << endl;
		}
		i++;
	}

	cout << "Answer is : " << result << endl;

	return 0;
}