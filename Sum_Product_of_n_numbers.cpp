//We have to find the sum and product of n numbers given by the user

#include <iostream>
using namespace std;

    int add(int n) {
        int sum = 0;
        for(int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }

    int multiply(int n) {
        int prod = 1;
        for(int i = 1; i <= n; i++) {
            prod *= i;
        }
        return prod;
    }

int main() {

    int n;
    cin>>n;

    cout << add(n) << endl;
    cout << multiply(n) << endl;

    return 0;
}
