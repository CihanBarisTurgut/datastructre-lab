#include <iostream>

using namespace std;




int Q3(int n, int a, int mul) {



	if (a <= n) {
		mul = a * mul;


	}
	a++;
	if (a > n) {

		return mul;

	}
	Q3(n, a, mul);
}


int main() {

	int n, mul = 1;
	cout << "Input a number for factorial"<<endl;
	cin >> n;
	int a = 1;

	mul = Q3(n, a, mul); // complexity O(n^^2)

	cout << "The factorial of " << n << " is : " << mul;

	return 0;
}