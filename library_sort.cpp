#include <iostream>
using namespace std;
int main()
{
int bookids[5];
int sortid;
cout<<"Enter 5 Library Book ID's:\n";
for(int i=0; i<5; i++)
{
cout<<"Book"<<i+1<<":";
cin>>bookids[i];
}
for (int i=0; i<5; i++)
{
for(int j=0; j<5-i; j++)
{
if(bookids[j]>bookids[j+1])
{
int temp=bookids[j];
bookids[j]=bookids[j+1];
bookids[j+1]=temp;
}
}
}
cout<<"\nBook IDs in ascending order:\n";
for(int i=0; i<5; i++)
{
cout << bookids[i] << " ";
}
cout<< endl;
return 0;
}
