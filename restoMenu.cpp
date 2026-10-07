#include <iostream>
using namespace std;
void menu()
{
  int choice;
  
  cout<<"\n\n====RESTAURANT MENU====";
  cout<<"\n1. Pizza";
  cout<<"\n2. Burger";
  cout<<"\n3. Pasta";
  cout<<"\n4. Exit";
  
  cout<<"\nEnter your choice: ";
  cin>>choice;
  if (choice == 1)
  {
    cout<<"You Selected Pizza.";
    menu();
  }
  else if (choice == 2)
  {
    cout<<"You selected Burger.";
    menu();
  }
  else if (choice == 3)
  {
    cout<<"You selected Pasta.";
    menu();
  }
  else if (choice == 4)
  {
    cout<<"\nThank You!";
  }
  else
  {
    cout<<"\n Invalid Choice!";
    menu();
  }
}
int main()
{
  menu();
  return 0;
}
