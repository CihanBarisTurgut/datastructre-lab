#include <iostream>

using namespace std;



void Q1B(int n) {

	int sum=0;
	int a = n;
	n = 1;
	while (a != 0){

		sum = n + sum;
		n++;
	
	    a--;
	}
	cout << sum;
}


int main() {

	int n;

	cin >> n;

	Q1B(n);//complexity O(n)


	return 0;
}