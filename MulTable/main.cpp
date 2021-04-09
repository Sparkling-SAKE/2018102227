
#include <iostream>

using namespace std;

const int RANGE = 9;

int main()
{
	for (int i = 1; i < RANGE + 1; ++i)
		for (int j = 1; j < RANGE + 1; ++j)
			cout << i << '*' << j << '=' << i * j << endl;

	return 0;
}