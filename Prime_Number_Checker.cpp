#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    if(n<2){
        cout<<"Invalid input!"<<endl;
        return 0;
    }
    
    for(int i = 2; i < n; i++) {
        if(n % i == 0){
            cout << "This number is not a prime number!"<< endl;
            return 0;
        }
    }

    cout<<"This number is a prime number!"<<endl;
    return 0;
}
