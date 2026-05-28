#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

struct Dot
{
    double x;
    double y;
};

double getArea(Dot* a)
{
    double w = sqrt((a[1].x - a[0].x) * (a[1].x - a[0].x) +
                    (a[1].y - a[0].y) * (a[1].y - a[0].y));

    double h = sqrt((a[2].x - a[1].x) * (a[2].x - a[1].x) +
                    (a[2].y - a[1].y) * (a[2].y - a[1].y));

    return w * h;
}

int main()
{
    srand(time(NULL));

    Dot* arr = new Dot[4];

    int m;

    cout << "1 - input" << endl;
    cout << "2 - random" << endl;
    cin >> m;

    if(m == 1)
    {
        for(int i = 0; i < 4; i++)
        {
            cout << "x: ";
            cin >> arr[i].x;

            cout << "y: ";
            cin >> arr[i].y;
        }
    }
    else
    {
        arr[0].x = 0;
        arr[0].y = 0;

        arr[1].x = rand() % 15 + 1;
        arr[1].y = 0;

        arr[2].x = arr[1].x;
        arr[2].y = rand() % 15 + 1;

        arr[3].x = 0;
        arr[3].y = arr[2].y;

        cout << endl;

        for(int i = 0; i < 4; i++)
        {
            cout << arr[i].x << " ";
            cout << arr[i].y << endl;
        }
    }

    cout << endl;
    cout << "Area = " << getArea(arr) << endl;

    delete[] arr;

    return 0;
}
```
