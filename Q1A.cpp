#include <iostream>

using namespace std;



void Q1A(int n) {

	int a;
	a = n;

	for (int i = 0; i <= n; i++) {

		cout << a << " ";
		a--;
	}

}






int main() {


	int n;

	cin >> n;

	Q1A(n);// complexity O(n)






	return 0;
}