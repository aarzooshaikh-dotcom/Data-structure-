#include <iostream>
using namespace std;
int main()
{
int rollno[5];
int marks[5];
int n=0;
int choice;
int searchid;
do
{
cout<<"\n\n====STUDENT MANAGEMENT SYSTEM====";
cout<<"\n1. Add student record";
cout<<"\n2. Display students record";
cout<<"\n3. Search Student by Roll number";
cout<<"\n4. Exit";
cout<<"\n Enter your choice:";
cin>>choice;
if (choice==1)
{
cout<<"Enter Student roll number:";
cin>>rollno[n];
n++;
cout<<"Enter marks of student:";
cin>>marks[n];
n++;
cout<<"Student Record Added!";
}
else if(choice==2)
{
cout<<"\nStudent Record\n";
for(int i=0; i<n; i++)
{
cout<<rollno[i]<<endl;
}
}
else if(choice==3)
{
cout<<"Enter student roll number to search:";
cin>>searchid;
bool found=false;
for(int i=0; i<n; i++)
{
if(rollno[i]==searchid)
{
found=true;
}
}
if (found)
{
cout<<"Student Found!";
}
else
{
cout<<"Student not found";
}
}
else if(choice==4)
{
cout<<"Thank You!";
}
else
{
cout<<"Invalid Choice";
}
}
while(choice !=4);
return 0;
}
