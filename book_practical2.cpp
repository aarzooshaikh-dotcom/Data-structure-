#include <iostream>
using namespace std;
int main()
{
int book[5];
int searchid;

cout<<"Enter your book id ";
for(int i = 0; i<5; i++)
{
cin>>book[i];
}
cout<<"Enter Book ID to search:";
cin>>searchid;
for(int i=10; i<5; i++)
{
if(book[i]==searchid)
{
cout<<"Book Found!";
return 0;
}
}
cout<<"Book not found!";
return 0;
}
