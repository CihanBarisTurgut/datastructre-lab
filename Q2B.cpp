#include <iostream>

using namespace std;

int Q2B(int n,int a,int sum) {

	
	
	if (a <= n) {
		sum = a + sum;
		
		
	}
	a++;
	if (a > n) {
		
		return sum;

	}
	Q2B(n,a,sum);
}


int main() {

	int n, sum = 0;
	cout << "Input a number for sum" << endl;
	cin >> n;
	int a = 1;

	sum = Q2B(n,a,sum); // complexity O(n^^2)

	
	cout << "The sum of the numbers 1 to " << n << " : " << sum;

	return 0;
}