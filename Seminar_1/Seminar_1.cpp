#include <iostream>
#include "bubble_sort.h"
#include "exchange_sort.h"

using namespace std;

int main()
{
    int arr[] = { 23, 72, 89, 2, 3, 90 };

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";
    bubble_sort(6, arr);

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

