#pragma once
#include <iostream>

using namespace std;

class ArrayList
{
private:
    int* items;
    int length;
    int capacity;

    void expand()
    {
        capacity *= 2;

        int* temp = new int[capacity];

        for (int i = 0; i < length; i++)
        {
            temp[i] = items[i];
        }

        delete[] items;
        items = temp;
    }

public:
    ArrayList()
    {
        length = 0;
        capacity = 5;
        items = new int[capacity];
    }

    ~ArrayList()
    {
        delete[] items;
    }

    void add(int value)
    {
        if (length >= capacity)
        {
            expand();
        }

        items[length] = value;
        length++;
    }

    void insertAt(int pos, int value)
    {
        if (pos < 0 || pos > length)
        {
            cout << "Invalid position" << endl;
            return;
        }

        if (length >= capacity)
        {
            expand();
        }

        for (int i = length; i > pos; i--)
        {
            items[i] = items[i - 1];
        }

        items[pos] = value;
        length++;
    }

    void erase(int pos)
    {
        if (pos < 0 || pos >= length)
        {
            cout << "Invalid position" << endl;
            return;
        }

        for (int i = pos; i < length - 1; i++)
        {
            items[i] = items[i + 1];
        }

        length--;
    }

    int at(int pos)
    {
        if (pos < 0 || pos >= length)
        {
            cout << "Invalid position" << endl;
            return -1;
        }

        return items[pos];
    }

    int size()
    {
        return length;
    }

    int buffer()
    {
        return capacity;
    }

    void print()
    {
        if (length == 0)
        {
            cout << "List is empty" << endl;
            return;
        }

        for (int i = 0; i < length; i++)
        {
            cout << items[i] << " ";
        }

        cout << endl;
    }
};
