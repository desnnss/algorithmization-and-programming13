#include <iostream>
#include "MyVector.h"

using namespace std;

int main()
{
    MyVector vector;

    int option = -1;

    while (option != 0)
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1 - Add element" << endl;
        cout << "2 - Insert by index" << endl;
        cout << "3 - Delete by index" << endl;
        cout << "4 - Get element" << endl;
        cout << "5 - Number of elements" << endl;
        cout << "6 - Buffer size" << endl;
        cout << "7 - Show vector" << endl;
        cout << "0 - Exit" << endl;

        cin >> option;

        if (option == 1)
        {
            int value;

            cout << "Enter value: ";
            cin >> value;

            vector.addElement(value);
        }
        else if (option == 2)
        {
            int index;
            int value;

            cout << "Enter index: ";
            cin >> index;

            cout << "Enter value: ";
            cin >> value;

            vector.addByIndex(index, value);
        }
        else if (option == 3)
        {
            int index;

            cout << "Enter index: ";
            cin >> index;

            vector.deleteByIndex(index);
        }
        else if (option == 4)
        {
            int index;

            cout << "Enter index: ";
            cin >> index;

            cout << "Element = " << vector.getElement(index) << endl;
        }
        else if (option == 5)
        {
            cout << "Elements count = " << vector.getCount() << endl;
        }
        else if (option == 6)
        {
            cout << "Buffer size = " << vector.getBufferSize() << endl;
        }
        else if (option == 7)
        {
            vector.showElements();
        }
    }

    return 0;
}
