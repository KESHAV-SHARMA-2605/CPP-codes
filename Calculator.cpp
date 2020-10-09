#include <iostream>
using namespace std;

int main() {

    int a, b, sum, diff, pro, quo, rem;

    cout << "Please enter two numbers: " << endl;
    cin >> a >> b;

    sum = a + b;

    diff = a - b;

    pro = a * b;

    quo = a / b;

    rem = a % b;

    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;

    cout << "The difference of " << a << " and " << b << " is: " << diff << endl;

    cout << "The product of " << a << " and " << b << " is: " << pro << endl;

    cout << "The quotient of " << a << " and " << b << " is: " << quo << endl;

    cout << "The remainder of " << a << " and " << b << " is: " << rem << endl;

    return 0;
}
