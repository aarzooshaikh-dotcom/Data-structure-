#include<iostream>
#include<string>
using namespace std;

struct Student
{
    int rollno;
    string name;
    int age;
    string course;
    Student *next;
    Student *hashnext;
};

Student *head = NULL;
const int SIZE = 10;
Student *hashtable[SIZE] = {NULL};

int hashfunction(int rollno)
{
    return rollno % SIZE;
}

// Register Student
void registerStudent()
{
    Student *p = new Student;

    cout << "Enter Roll Number: ";
    cin >> p->rollno;

    int index = hashfunction(p->rollno);
    Student *temp = hashtable[index];

    while(temp != NULL)
    {
        if(temp->rollno == p->rollno)
        {
            cout << "Roll Number already exists!\n";
            delete p;
            return;
        }
        temp = temp->hashnext;
    }

    cout << "Enter Student Name: ";
    cin >> p->name;

    cout << "Enter Age: ";
    cin >> p->age;

    cout << "Enter Course: ";
    cin >> p->course;

    p->next = head;
    head = p;

    p->hashnext = hashtable[index];
    hashtable[index] = p;

    cout << "Student registered successfully!\n";
}

// Search Student
void searchStudent()
{
    int rollno;
    cout << "Enter Roll Number to search: ";
    cin >> rollno;

    int index = hashfunction(rollno);
    Student *temp = hashtable[index];

    while(temp != NULL)
    {
        if(temp->rollno == rollno)
        {
            cout << "\nStudent Found!\n";
            cout << "Roll Number: " << temp->rollno << endl;
            cout << "Name: " << temp->name << endl;
            cout << "Age: " << temp->age << endl;
            cout << "Course: " << temp->course << endl;
            return;
        }
        temp = temp->hashnext;
    }

    cout << "Student not found!\n";
}

// Display Students
void displayStudents()
{
    Student *temp = head;

    if(temp == NULL)
    {
        cout << "No student records available.\n";
        return;
    }

    cout << "\n--- All Student Records ---\n";

    while(temp != NULL)
    {
        cout << "\nRoll Number: " << temp->rollno << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Age: " << temp->age << endl;
        cout << "Course: " << temp->course << endl;

        temp = temp->next;
    }
}

// Update Student
void updateStudent()
{
    int rollno;
    cout << "Enter Roll Number to update: ";
    cin >> rollno;

    Student *temp = hashtable[hashfunction(rollno)];

    while(temp != NULL)
    {
        if(temp->rollno == rollno)
        {
            cout << "Enter new Name: ";
            cin >> temp->name;

            cout << "Enter new Age: ";
            cin >> temp->age;

            cout << "Enter new Course: ";
            cin >> temp->course;

            cout << "Student updated successfully!\n";
            return;
        }
        temp = temp->hashnext;
    }

    cout << "Student not found!\n";
}

// Enroll in Course
void enrollCourse()
{
    int rollno;
    cout << "Enter Roll Number: ";
    cin >> rollno;

    Student *temp = hashtable[hashfunction(rollno)];

    while(temp != NULL)
    {
        if(temp->rollno == rollno)
        {
            cout << "Enter Course Name: ";
            cin >> temp->course;

            cout << "Course enrolled successfully!\n";
            return;
        }
        temp = temp->hashnext;
    }

    cout << "Student not found!\n";
}

// Withdraw from Course
void withdrawCourse()
{
    int rollno;
    cout << "Enter Roll Number: ";
    cin >> rollno;

    Student *temp = hashtable[hashfunction(rollno)];

    while(temp != NULL)
    {
        if(temp->rollno == rollno)
        {
            temp->course = "None";
            cout << "Course withdrawn successfully!\n";
            return;
        }
        temp = temp->hashnext;
    }

    cout << "Student not found!\n";
}

// Delete Student
void deleteStudent()
{
    int rollno;
    cout << "Enter Roll Number to delete: ";
    cin >> rollno;

    int index = hashfunction(rollno);

    Student *temp = head;
    Student *prev = NULL;

    while(temp != NULL)
    {
        if(temp->rollno == rollno)
        {
            if(prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            Student *h = hashtable[index];
            Student *hp = NULL;

            while(h != NULL)
            {
                if(h->rollno == rollno)
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
            cout << "Student deleted successfully!\n";
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    cout << "Student not found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- University Registration System ---\n";
        cout << "1. Register Student\n";
        cout << "2. Search Student\n";
        cout << "3. Display All Students\n";
        cout << "4. Update Student\n";
        cout << "5. Enroll in Course\n";
        cout << "6. Withdraw from Course\n";
        cout << "7. Delete Student\n";
        cout << "8. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                registerStudent();
                break;

            case 2:
                searchStudent();
                break;

            case 3:
                displayStudents();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                enrollCourse();
                break;

            case 6:
                withdrawCourse();
                break;

            case 7:
                deleteStudent();
                break;

            case 8:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 8);

    return 0;
}
