#include "header.h"


int readFileToArray(const string& filename, int arr[], int maxSize);
void integerExists(const int arr[], int size, int value, bool& exists);
void updateValueAtIndex(int arr[], int size);
void newInteger(int*& arr, int& size, int& max);
void removeInteger(int*& arr, int& size);