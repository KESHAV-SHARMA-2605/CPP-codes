#include <iostream>
using namespace std;

int length, breadth;

int perimeter() {
    return 2*(length+breadth);
}
int area() {
    return length*breadth;
}

int main() {

    cout << "Please enter the dimensions of the rectangle (length and breadth) respectively: " << endl;
    cin >> length >> breadth;

    cout << "The perimeter of the desired rectangle is: " << perimeter() << endl;

    cout << "The area of the desired rectangle is: " << area() << endl;

    return 0;
}
