#include <iostream>
#include <ctime>

using namespace std;

void task1()
{
    int* a = new int;
    float* b = new float;
    double* c = new double;
    char* d = new char;
    bool* e = new bool;

    cout << "Enter int: ";
    cin >> *a;

    cout << "Enter float: ";
    cin >> *b;

    cout << "Enter double: ";
    cin >> *c;

    cout << "Enter char: ";
    cin >> *d;

    cout << "Enter bool (0 or 1): ";
    cin >> *e;

    cout << "\nValues:\n";
    cout << *a << endl;
    cout << *b << endl;
    cout << *c << endl;
    cout << *d << endl;
    cout << *e << endl;

    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
}

void task2()
{
    double* p = new double;
    double& r = *p;

    cout << "Enter double: ";
    cin >> r;

    cout << "Value: " << r << endl;

    delete p;
}

void task3()
{
    int n;

    cout << "Array size: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = n - 1 - i;
    }

    cout << "Array:\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    delete[] arr;
}

void printArray(float*** arr, int x, int y, int z)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << arr[i][j][k] << " ";
            }

            cout << endl;
        }

        cout << endl;
    }
}

void task4()
{
    int x, y, z;

    cout << "Enter sizes: ";
    cin >> x >> y >> z;

    float*** arr = new float**[x];

    for (int i = 0; i < x; i++)
    {
        arr[i] = new float*[y];

        for (int j = 0; j < y; j++)
        {
            arr[i][j] = new float[z];
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                arr[i][j][k] = rand() % 100;
            }
        }
    }

    printArray(arr, x, y, z);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            delete[] arr[i][j];
        }

        delete[] arr[i];
    }

    delete[] arr;
}

int main()
{
    srand(time(0));

    cout << "Task 1\n";
    task1();

    cout << "\nTask 2\n";
    task2();

    cout << "\nTask 3\n";
    task3();

    cout << "\nTask 4\n";
    task4();

    return 0;
}
