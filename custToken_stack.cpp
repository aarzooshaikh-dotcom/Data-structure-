#include <iostream>
using namespace std;

int main()
{
  int stack[5];
  int top = -1;
  
  stack[++top] = 101;
  stack[++top] = 102;
  stack[++top] = 103;
  stack[++top] = 104;
  stack[++top] = 105;
  
  cout<< "Servicing History:" <<endl;
  while (top>=0)
  {
    cout<<stack[top]<<endl;
    top--;
  }
  return 0;
}

