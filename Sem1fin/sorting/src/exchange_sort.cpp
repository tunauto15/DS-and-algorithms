template <typename bebra>
//#include "exchange_sort.h"


void exchange_sort(int n, bebra arr[]){
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                bebra temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}