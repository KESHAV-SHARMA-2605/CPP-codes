#include <iostream>
using namespace std;
int main() {
    int i, n, a, b, c, d, e;
    float sum, average;

    cout << "Please enter the number of elements in the array (less than or equal to 100): " << endl;
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << i << ") Please enter the number: " << endl;
        cin >> a >> b >> c >> d >> e;
    }

    sum = a + b + c + d + e;

    average = sum / n;

    cout << "The average is: " << average << endl;

    return 0;
}
