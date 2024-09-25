template <typename bebra>
//#include "selection_sort.h"

void selection_sort(int n, bebra arr[]){
    int min;
    for(int i = 0; i < n-1; i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }

        }
        std::swap(arr[i], arr[min]);
    }
}