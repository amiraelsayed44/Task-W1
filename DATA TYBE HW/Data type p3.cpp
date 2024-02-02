

#include <iostream>
using namespace std;

int main()
{
	int even1, even2, even3, even4,
		odd1, odd2, odd3, odd4;
	cin >> odd1 >> even1;
	cin >> odd2 >> even2;
	cin >> odd3 >> even3;
	cin >> odd4 >> even4;
	cout << even1 << "+" << even2 << "+" << even3 << "+" << even4 << "=" << even1 + even2 + even3 + even4 << endl;
	cout << odd1 << "+" << odd2 << "+" << odd3 << "+" << odd4 << "=" << odd1 + odd2 + odd3 + odd4 << endl;
}

