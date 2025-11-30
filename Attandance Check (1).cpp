#include<iostream>
using namespace std;

int main() {

    int totalClasses = 60;
    int attended = 48;

    float requiredAttendance = totalClasses * 0.75; // 75%
    float sixtyPercent = totalClasses * 0.60;       // 60%

    cout << "Requirement Met? " << (attended >= requiredAttendance) << endl;
    cout << "Attended more than 50 classes? " << (attended > 50) << endl;
    cout << "Attended less than 60% of classes? " << (attended < sixtyPercent) << endl;

    return 0;
}
