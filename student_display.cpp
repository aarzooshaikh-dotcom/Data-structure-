#include <iostream>
using namespace std;

int main() {
       int roll_no[5];
    cout << "Enter your roll number of 5 students:" << endl;
    for(int i=0; i<5; i++) {
       cout << "Students" << (i+1) << ": ";
       cin >> roll_no[i];
    }
    cout << "\nThe roll numbers you entered are:" << endl;
    for(int i=0; i<5; i++) {
       cout << "Students" << (i+1) << ": " << roll_no[i] << endl;
    }
    
    return 0;
}


