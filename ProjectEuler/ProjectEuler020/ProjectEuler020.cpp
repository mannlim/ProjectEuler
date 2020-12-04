#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numVector(200);

	numVector[0] = 1;
	int sum = 0;

	for (int num = 100; num > 1; num--)
	{
		for (int n = 0; n < numVector.size(); n++)
		{
			numVector[n] *= num;
			//cout << numVector[n] << " ";
		}
		//cout << endl;

		for (int n = 0; n < numVector.size() - 1; n++)
		{
			if (numVector[n] >= 10)
			{
				numVector[n + 1] += (int)(numVector[n] / 10);
				numVector[n] = numVector[n] % 10;
			}
		}

		/*for (int n = 0; n < numVector.size(); n++)
		{
			cout << numVector[n] << " ";
		}
		cout << endl;
		cout << endl;*/
	}

	for (int n = 0; n < numVector.size(); n++)
	{
		sum += numVector[n];
	}

	cout << "Answer is : " << sum << " " << endl;

	return 0;
}