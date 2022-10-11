#include <iostream>

using namespace std;


int Q250(int n,int a) {

	
	

	if (n != 51) {
		cout << a << " ";
		a++;
		
			
	}
	
	n--;
	if (n == 0) {
		return 0;
	}
	Q250(n,a);
}

int main() {
	
	int n,a;
	n = 50;
	a = 1;

	Q250(n,a); //complexity O(50)
	
	
	
	
	
	
	
	
	return 0;
}