#include <iostream>

using namespace std;



void Q1C(int n) {
	int sum = 0;
	int a=n;
	n = 1;
	do {
		
		
		sum = n + sum;
		n++;
		a--;
	} while (a != 0);
	cout << sum;
}

int main() {

	int n;

	cin >> n;
	Q1C(n); //complexity O(n)



	return 0;
}