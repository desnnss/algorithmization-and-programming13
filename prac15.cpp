#include <iostream>
#include <string>

using namespace std;

void primitiveTypes()
{
    int* a = new int;
    double* b = new double;
    char* c = new char;
    bool* d = new bool;
    float* e = new float;

    cout << "Enter int: ";
    cin >> *a;

    cout << "Enter double: ";
    cin >> *b;

    cout << "Enter char: ";
    cin >> *c;

    cout << "Enter bool (0 or 1): ";
    cin >> *d;

    cout << "Enter float: ";
    cin >> *e;

    cout << "\nValues:\n";
    cout << "int = " << *a << endl;
    cout << "double = " << *b << endl;
    cout << "char = " << *c << endl;
    cout << "bool = " << *d << endl;
    cout << "float = " << *e << endl;

    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
}

void referenceTask()
{
    double x;

    cout << "Enter double number: ";
    cin >> x;

    double& ref = x;

    cout << "Reference value: " << ref << endl;

    ref += 5;

    cout << "Changed value: " << x << endl;
}

void arrayTask()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\nArray:\n";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    delete[] arr;
}

void stringTask()
{
    string text;

    cin.ignore();

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Your text: " << text << endl;
    cout << "Length: " << text.length() << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Primitive types\n";
        cout << "2. Reference task\n";
        cout << "3. Dynamic array\n";
        cout << "4. String task\n";
        cout << "0. Exit\n";
        cout << "Choose: ";

        cin >> choice;

        switch(choice)
        {
            case 1:
                primitiveTypes();
                break;

            case 2:
                referenceTask();
                break;

            case 3:
                arrayTask();
                break;

            case 4:
                stringTask();
                break;

            case 0:
                cout << "Program closed\n";
                break;

            default:
                cout << "Wrong choice\n";
        }

    } while(choice != 0);

    return 0;
}
```
