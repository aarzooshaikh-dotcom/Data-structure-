#include <iostream>
using namespace std;
int main() {
const int NUM_STUDENTS = 5;
int marks[NUM_STUDENTS];
cout << "Enter the marks of 5 students:" << endl;
for (int i = 0; i < NUM_STUDENTS; i++) {
cout << "Student " << (i + 1) << ": ";
cin >> marks[i];
}
for (int i = 0; i < NUM_STUDENTS - 1; i++) {
for (int j = 0; j < NUM_STUDENTS - i - 1; j++) {
if (marks[j] < marks[j + 1]) {
int temp = marks[j];
marks[j] = marks[j + 1];
marks[j + 1] = temp;
}
}
}
cout << "\nMarks of students from Highest to Lowest:" << endl;
for (int i = 0; i < NUM_STUDENTS; i++) {
cout << "Rank " << (i + 1) << ": " << marks[i] << endl;
}
return 0;
}
