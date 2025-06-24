#include <iostream>
using namespace std;

int main() {
    int semesters;
    float sgpa[12], sum = 0.0;

    cout << "Enter number of semesters: ";
    cin >> semesters;

    if (semesters <= 0 || semesters > 12) {
        cout << "Invalid number of semesters!" << endl;
        return 1;
    }

    for (int i = 0; i < semesters; i++) {
        cout << "Enter SGPA for Semester " << i + 1 << ": ";
        cin >> sgpa[i];
        if (sgpa[i] < 0 || sgpa[i] > 10) {
            cout << "Invalid SGPA entered!" << endl;
            return 1;
        }
        sum += sgpa[i];
    }

    float cgpa = sum / semesters;
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}