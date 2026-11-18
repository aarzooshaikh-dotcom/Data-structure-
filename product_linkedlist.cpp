#include <iostream>
#include <string>
using namespace std;
struct Product
{
int id;
string name;
float price;
Product *next;
Product *hashnext;
};
Product *head = NULL;
const int SIZE = 10;
Product *hashtable[SIZE] = {NULL};
int hashfunction(int id)
{
  return id % SIZE;
}
void addProduct()
{
  Product *p = new Product;
  cout<<"Enter Product ID: ";
  cin>> p->id;
  int index = hashfunction(p->id);
  Product *temp = hashtable[index];
  while(temp != NULL)
  {
    if(temp->id == p->id)
    {
      cout<<"Product ID already exists!\n";
      delete p;
      return;
    }
    temp = temp->hashnext;
  }
  cout <<"Enter Product Name: ";
  cin>> p->name;
  cout<<"Enter Price: ";
  cin>> p->price;
  p->next = head;
  head= p;
  p->hashnext = hashtable[index];
  hashtable[index] = p;
  cout<<"Product added successfully!\n";
}
void displayProduct()
{
  Product *temp = head;
  if(temp == NULL)
  {
    cout<<"No Products available.\n";
    return;
  }
  cout<<"\n---All Products Records---\n";
  while(temp != NULL)
  {
    cout<<"\nProduct ID: "<<temp->id<<endl;
    cout<<"Name: "<<temp->name<<endl;
    cout<<"Price: "<<temp->price<<endl;
    temp = temp->next;
  }
}
void updateProduct()
{
  int id;
  cout<<"Enter Product ID to update: ";
  cin>>id;
  Product *temp = hashtable[hashfunction(id)];
  while(temp != NULL)
  {
    if(temp->id == id)
    {
      cout<<"Enter new Price: ";
      cin>>temp->price;
      cout<<"Product updated successfully!\n";
      return;
    }
    temp = temp->hashnext;
  }
  cout<<"Product not found!\n";
}
void deleteProduct()
{
  int id;
  cout<<"Enter Product id to delete: ";
  cin>>id;
  int index = hashfunction(id);
  Product *temp = head;
  Product *prev = NULL;
  while(temp != NULL)
  {
    if(temp->id == id)
    {
      if(prev ==NULL)
        head = temp->next;
      else
        prev->next = temp->next;
      Product *h = hashtable[index];
      Product *hp = NULL;
      while(h != NULL)
      {
        if(h->id == id)
        {
          if(hp == NULL)
            hashtable[index] = h->hashnext;
          else
            hp->hashnext = h->hashnext;
          break;
        }
        hp = h;
        h = h->hashnext;
      }
      delete temp;
      cout<<"Product deleted successfully!\n";
      return;
    }
    prev = temp;
    temp = temp->next;
  }
  cout<<"Product not found!\n";
}
int main()
{
  int choice;
  do
  {
    cout << "\n--- E-Commerce Inventory System---\n";
    cout << "1. Add Product\n";
    cout << "2. Display Product\n";
    cout << "3. Update Product\n";
    cout << "4. Delete Product\n";
    cout << "5. Exit\n";

    cout << "Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
      case 1:
        addProduct();
        break;
      case 2:
        displayProduct();
        break;
      case 3:
        updateProduct();
        break;
      case 4:
        deleteProduct();
        break;
      case 5:
        cout <<"Exiting Program...\n";
        break;
      default:
        cout <<"Invalid choice!\n";
    }
  } while(choice !=6);
  return 0;
}
