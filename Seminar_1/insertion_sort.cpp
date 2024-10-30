template <typename bebra>

void insertion_sort(int n, bebra arr[]) {
    for (int i = 1; i < n; ++i) {
        bebra key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] >= key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
