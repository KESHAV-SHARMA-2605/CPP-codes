#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, sum, average;

    cout << "Please enter the marks of your three subjects (please enter the marks that you obtained from 100): " << endl;
    cin >> m1;

    if(m1 < 0 || m1 > 100) {
        cout << "Invalid input!!! You needed to enter the marks of subject that you obtained from 100!!!" << endl;
        return 0;
    }

    cin >> m2;

    if(m2 < 0 || m2 > 100) {
        cout << "Invalid input!!! You needed to enter the marks of subject that you obtained from 100!!!" << endl;
        return 0;
    }

    cin >> m3;

    if(m3 < 0 || m3 > 100) {
        cout << "Invalid input!!! You needed to enter the marks of subject that you obtained from 100!!!" << endl;
        return 0;    
    }

    if(m1 >= 0 && m1 <= 100 && m2 >= 0 && m2 <= 100 && m3 >= 0 && m3 <= 100) {
        sum = m1 + m2 + m3;
        average = sum / 3;
    }
    else {
        return 0;
    }
    
    cout << "The sum of your marks out of 300 is: " << sum << endl;
    
    cout << "Your average marks in each subject out of 100 is: " << average << endl;
    
    if(average >= 75) {
        cout << "Excellent!!! As you have scored an average of 75 or 75+, 'A' grade is awarded to you!!! Keep it up!!!" << endl;
    }
    else if(average >= 35 && average < 75) {
        cout << "Good!!! As you have scored an average of 35, 35+, or below 75, 'B' grade is awarded to you!!! But, get the 'A' grade next time!!!" << endl;
    }
    else {
        cout << "Poor!!! As you have scored an average of 35 below, 'C' grade is awarded to you!!! You need to focus on your studies!!!" << endl;
    }

    return 0;
}    
