#include <iostream>
#include <string>
using namespace std;
int main()
{
int id1,id2,id3;
string title1,title2,title3

cout<<"Enter Book 1 ID: ";
cin>>id1;
cin.ignore();
cout<<"Enter Book 1 Title: ";
getline(cin,title1);

cout<<"Enter Book 2 ID: ";
cin>>id2;
cin.ignore();
cout<<"Enter Book 2 Title: ";
getline(cin,title2);

cout<<"Enter Book 3 ID; ";
cin>>id3;
cin.ignore();
cout<<"Enter Book 3 Title: ";
getline(cin,title3);

cout<<"\n ====LIBRARY BOOK====";
cout<<"\n Enter id1"<<id1;
cout<<"\n Enter title1"<<title1;
cout<<"\n Enter id2"<<id2;
cout<<"\n Enter title2"<<title2;
cout<<"\n Enter id3"<<id3;
cout<<"\n Enter title3"<<title3;

return 0;
}


