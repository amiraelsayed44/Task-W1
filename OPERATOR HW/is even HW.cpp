
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	//1
	bool IsEven = (num % 2 == 0);
		cout << "is the number is even?  " << IsEven << endl;
	//2
		double result = (double)num / 2.0;
		result = result - (int)result;

		cout << "is the number is even?  " << (result==0) << endl;
    //3
		int last_digit = num % 10;
		bool is_even = (last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8);
		cout << "is the number is even?  " << is_even << endl;
		
		
}

