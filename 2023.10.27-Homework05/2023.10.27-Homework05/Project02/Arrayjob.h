#pragma once
#ifndef Arrayjobh
#define Arrayjobh

void printArray(int* a, int len);
void expandArray(int*& a, int& len);
void addElement(int*& a, int& len, int element);
void printMenu();
void contractArray(int*& a, int& len);
int extractElement(int*& a, int& len, int index);
void printReverseArray(int* a, int len);
void sort_ascending_array(int*& a, int& len);
void printReverseArray(int* a, int len);
void swapelementsMinMax(int*& a, int len);
void removeDuplicates(int*& a, int& len);
void addingRandomElements(int*& a, int& len, int n);

#endif