#include <catch.hpp>
#include <../optimized_bubble_sort.h>

TEST_CASE("optimized_bubble_sort test") {
    int arr1[] = { 90, -723, 8, 35, -28, 0, 23, 995 };
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    optimized_bubble_sort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    int arr2[] = { -32, -344, -728, -8, -257, -1 };
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    optimized_bubble_sort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }

    int arr3[] = { 7, 7, 7, 7, 7, 7, 7, 7, 2, 2 };
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    optimized_bubble_sort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}