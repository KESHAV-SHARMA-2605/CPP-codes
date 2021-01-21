// We have to print the first 'j' multiples of an input number 'n' entered by user

#include <iostream>
using namespace std;

int main() {

    int n, j;
    cin >> n >> j;

    for(int i = 1; i <= j; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
