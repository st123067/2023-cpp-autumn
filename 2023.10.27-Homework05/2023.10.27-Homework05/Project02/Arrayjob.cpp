#include "Arrayjob.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

void printArray(int* a, int len)
{
    if (a == nullptr)
    {
        std::cout << "EMPTY";
    }
    else
    {
        for (int i = 0; i < len; ++i)
        {
            std::cout << a[i] << " ";
        }
    }
    std::cout << std::endl;
}
void expandArray(int*& a, int& len)
{
    int* newA = new int[len + 1] { 0 };
    if (a != nullptr)
    {
        for (int i = 0; i < len; ++i)
        {
            newA[i] = a[i];
        }
        delete[] a;
    }
    a = newA;
    ++len;
}
void addElement(int*& a, int& len, int element)
{
    expandArray(a, len);
    a[len - 1] = element;
}
void contractArray(int*& a, int& len)
{
    if (a != nullptr)
    {
        int* newA = new int[len - 1];
        for (int i = 0; i < len - 1; ++i)
        {
            newA[i] = a[i];
        }
        delete[] a;
        a = newA;
        --len;
    }
}
bool indexValid(int index, int len)
{
    return (index >= 0 && index < len);
}
int extractElement(int*& a, int& len, int index)
{
    int res = -1;
    if (indexValid(index, len))
    {
        res = a[index];
        for (int i = index; i < len - 1; ++i)
        {
            a[i] = a[i + 1];
        }
        contractArray(a, len);
    }
    return res;
}
void printReverseArray(int* a, int len)
{
    if (a == nullptr)
    {
        std::cout << "EMPTY";
    }
    else
    {
        for (int i = 0; i < len; ++i)
        {
            std::cout << a[len - i - 1] << " ";
        }
    }
    std::cout << std::endl;
}
void printMenu()
{
    std::cout << "0 - Exit" << std::endl;
    std::cout << "1 - Print array" << std::endl;
    std::cout << "2 - Append element to array" << std::endl;
    std::cout << "3 - Extract element from array" << std::endl;
    std::cout << "4 - Sorting the array in ascending" << std::endl;
    std::cout << "5 - Print Reverse Array " << std::endl;
    std::cout << "6 - SWAP Elements Min-Max " << std::endl;
    std::cout << "7 - Remove duplicates " << std::endl;
    std::cout << "8 - Adding Random Elements " << std::endl;


}
void sort_ascending_array(int*& a, int& len)
{
    for (int i = 1; i < len; ++i)
    {
        for (int j = 0; j < len - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                int b = 0;
                b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
}
void swapelementsMinMax(int*& a, int len)
{
    if (a == nullptr)
    {
        std::cout << "EMPTY" << std::endl;
    }
    else
    {
        int min = 0;
        int max = 0;
        for (int i = 0; i < len; i++)
        {
            if (a[i] < a[min])
            {
                min = i;
            }
            if (a[i] > a[max])
            {
                max = i;
            }
        }
        int b = 0;
        b = a[max];
        a[max] = a[min];
        a[min] = b;
    }
}
void removeDuplicates(int*& a, int& len)
{
    if (a == nullptr)
    {
        std::cout << "EMPTY";
    }
    else
    {
        int* newA = new int[len] { 0 };
        bool c = 0;
        int d = 0;
        for (int i = 0; i < len; i++)
        {
            c = 0;
            for (int j = 0; j < d; j++)
            {
                if (a[i] == newA[j])
                {
                    c = 1;
                    break;
                }
            }
            if (c == 0)
            {
                newA[d] = a[i];
                ++d;
            }
        }
        delete[]a;
        len = d;
        a = newA;
    }
}
void addingRandomElements(int*& a, int& len, int n)
{
    srand(time(0));
    for (int i = 0; i < n; ++i)
    {
        expandArray(a, len);
        a[len - 1] = rand();
    }
}