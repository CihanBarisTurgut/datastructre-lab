#include <iostream>

using namespace std;


void Q4(int n) {
    static int n1 = 0, n2 = 1, n3;
    if (n > 0) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        Q4(n - 1);
    }
}
int main() {
    int n;
    cout << "Enter the number of terms of series: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    cout << "0 " << "1 ";
    Q4(n - 2);  //n-2 because 2 numbers are already printed    
    return 0;
}