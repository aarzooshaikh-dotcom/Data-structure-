#include <iostream>
using namespace std;
int main() {
int roll_no[5];
int searchroll;
bool isfound = false;
cout << "Enter the roll number of 5 students: " << endl;
for(int i=0; i<5; i++) {
cout<< "Student" << i+1 <<": ";
cin>> roll_no[i];
}
cout<<"/nEnter the roll number you want to search for: ";
cin>> searchroll;
for(int i=0; i<5; i++) {
if(roll_no[i]==searchroll) {
isfound=true;
break;
}
}
if(isfound) {
cout<<"Student found" << endl;
}
else {
cout<<"student not found" << endl;
}
return 0;
}
