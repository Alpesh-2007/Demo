#include <iostream>
using namespace std;

int main()
{
    int num;
    int arr[20];

    while (true)
    {
        cout << endl
             << "Welcome To My Proggram !" << endl;

        cout << endl
             << "Enter 1 for creat arry:" << endl;
        cout << "Enter 2 for view arry:" << endl;
        cout << "Enter 3 for add element in arry:" << endl;
        cout << "Enter 4 for delet element from arry:" << endl;
        cout << "Enter 5 for exit" << endl;

        int choice;
        cout << endl
             << "Enter Your choice:" << endl;
        cin >> choice;

        switch (choice)

        {
        case 1:
        {
            cout << "Enter element how add in arry:" << endl;
            cin >> num;
            if (num > 0 && num < 20)
            {
                for (int i = 0; i < num; i++)
                {
                    cout << "enter element for arry " << i + 1 << " = ";
                    cin >> arr[i];
                }
            }
            else
            {
                cout << "Invalid size !" << endl;
            }
        }
        break;
        case 2:
        {
            cout << " element of arry : ";
            for (int i = 0; i < num; i++)
            {
                cout << arr[i] << " ";
            }
        }

        break;
        case 4:
        {
            int pos;
            cout << "Enter the position of element remove:";
            cin >> pos;

            if (pos >= 0 && pos < num)
            {
                for (int i = pos; i < num - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                num--;
                cout << "Remove successfully!" << endl;
            }
            else
            {
                cout << "Invalide position";
            }
        }

        break;
        case 3:
        {
            int poss;
            cout << "Enter the position:";
            cin >> poss;
            int val;
            cout << "Enter the value";
            cin >> val;

            if (poss >= 0 && poss < num)
            {
                arr[poss] = val;
                cout << "Update successefully!";
            }
            else
            {
                cout << "INvalid value";
            }
        }
        break;
        case 5:
        {
            cout << "visit again!" << endl;
            return 0;
        }
        break;

        default:
            break;
        }
    }
}