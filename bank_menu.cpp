#include <iostream>
using namespace std;

int main()
{
    int choice;
    int token = 0;
    int served = 0;

    do
    {
        cout << "\n--- BANK TOKEN MANAGEMENT SYSTEM ---";
        cout << "\n1. Issue Token";
        cout << "\n2. Display all tokens";
        cout << "\n3. Serve Customers";
        cout<<"\n4.Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                token++;
                cout << "Token issued successfully. Token Number: "
                     << token << endl;
                break;
            case 2:
                if (token == 0)
                {
                    cout << "No tokens issued yet!" << endl;
                }
                else
                {
                    cout << "All Tokens: ";
                    for (int i = 1; i <= token; i++)
                    {
                        cout << i << " ";
                    }
                    cout << endl;
                }
                break;


            case 3:
                if (served < token)
                {
                    served++;
                    cout << "Serving Customer with Token Number: "
                         << served << endl;
                }
                else
                {
                    cout << "No customers waiting!" << endl;
                }
                break;

            case 4:
                cout << "Exiting the program. Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}