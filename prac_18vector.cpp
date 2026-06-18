#pragma once
#include <iostream>

using namespace std;

class MyVector
{
private:
    int* arr;
    int count;
    int bufferSize;

    void increaseBuffer()
    {
        bufferSize = bufferSize * 2;

        int* newArr = new int[bufferSize];

        for (int i = 0; i < count; i++)
        {
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
    }

public:
    MyVector()
    {
        count = 0;
        bufferSize = 4;
        arr = new int[bufferSize];
    }

    ~MyVector()
    {
        delete[] arr;
    }

    void addElement(int value)
    {
        if (count == bufferSize)
        {
            increaseBuffer();
        }

        arr[count] = value;
        count++;
    }

    void addByIndex(int index, int value)
    {
        if (index < 0 || index > count)
        {
            cout << "Incorrect index" << endl;
            return;
        }

        if (count == bufferSize)
        {
            increaseBuffer();
        }

        for (int i = count; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[index] = value;
        count++;
    }

    void deleteByIndex(int index)
    {
        if (index < 0 || index >= count)
        {
            cout << "Incorrect index" << endl;
            return;
        }

        for (int i = index; i < count - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        count--;
    }

    int getElement(int index)
    {
        if (index < 0 || index >= count)
        {
            cout << "Incorrect index" << endl;
            return -1;
        }

        return arr[index];
    }

    int getCount()
    {
        return count;
    }

    int getBufferSize()
    {
        return bufferSize;
    }

    void showElements()
    {
        if (count == 0)
        {
            cout << "Vector is empty" << endl;
            return;
        }

        for (int i = 0; i < count; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};
