

#include <iostream>
#include "function.h"
#define N 10
#define INTEGER
using namespace std;

int main() 
{

    int arr[N];
    cout << "Массив:" << endl;
    init(arr, N);
    show(arr, N);
    cout << endl << endl;
    cout << "Давай отсортируем массив: " << endl;
    bSort(arr, N);
    show(arr, N);
    cout << endl << endl;
    findMin(arr, N);
    cout << endl;
    findMaxInt(arr, N);
    cout << endl;
    changeElInt(arr);
#undef INTEGER

#define FLOAT

    cout << endl;
    float arr1[N];
    cout << "Массив:" << endl;
    init(arr1, N);
    show(arr1, N);
    cout << endl << endl;
    cout << "Давай отсортируем массив: " << endl;
    bSort(arr1, N);
    show(arr1, N);
    cout << endl << endl;
    findMin(arr1, N);
    cout << endl;
    findMax(arr1, N);
    cout << endl;
    changeEl(arr1);
#undef FLOAT

#define CHAR

    cout << endl;
    char arr2[N];
    cout << "Массив:" << endl;
    init(arr2, N);
    show(arr2, N);
    cout << endl << endl;
    cout << "Давай отсортируем массив: " << endl;
    bSort(arr2, N);
    show(arr2, N);
    cout << endl << endl;
    findMin(arr2, N);
    cout << endl;
    findMax(arr2, N);
    cout << endl;
    changeEl(arr2);

#undef CHAR




    system("pause");
    return 0;
}