#include <iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
    ArrayList list;

    int command = -1;

    while (command != 0)
    {
        cout << "\n===== ARRAY LIST =====" << endl;
        cout << "1. Add element" << endl;
        cout << "2. Insert element" << endl;
        cout << "3. Remove element" << endl;
        cout << "4. Get element" << endl;
        cout << "5. Show size" << endl;
        cout << "6. Show buffer size" << endl;
        cout << "7. Print list" << endl;
        cout << "0. Exit" << endl;

        cin >> command;

        switch (command)
        {
        case 1:
        {
            int value;
            cout << "Value: ";
            cin >> value;

            list.add(value);
            break;
        }

        case 2:
        {
            int pos;
            int value;

            cout << "Position: ";
            cin >> pos;

            cout << "Value: ";
            cin >> value;

            list.insertAt(pos, value);
            break;
        }

        case 3:
        {
            int pos;

            cout << "Position: ";
            cin >> pos;

            list.erase(pos);
            break;
        }

        case 4:
        {
            int pos;

            cout << "Position: ";
            cin >> pos;

            cout << "Element: " << list.at(pos) << endl;
            break;
        }

        case 5:
        {
            cout << "Current size: " << list.size() << endl;
            break;
        }

        case 6:
        {
            cout << "Buffer size: " << list.buffer() << endl;
            break;
        }

        case 7:
        {
            list.print();
            break;
        }
        }
    }

    return 0;
}
