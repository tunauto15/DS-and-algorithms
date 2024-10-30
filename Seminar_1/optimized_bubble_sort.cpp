using namespace std;

template <typename bebra>


void optimized_bubble_sort(int n, bebra arr[]) {
    bool swapped;
    int lastSwapPos;

    do {
        swapped = false;
        lastSwapPos = 0;

        for (int i = 1; i < n; ++i) {
            if (arr[i - 1] > arr[i]) {
                
                
                swap(arr[i - 1], arr[i]);
                swapped = true;
                lastSwapPos = i;
            }
        }

        n = lastSwapPos;
    } while (swapped);
}