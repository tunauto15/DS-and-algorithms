#include <catch.hpp>
#include <../selection_sort.h>

TEST_CASE("selection_sort test") {
    int arr1[] = { 28, 92, 48, 84, 9, 23, 4 };
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    selection_sort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    int arr2[] = { 43, 7, 2, 33, 53, -23, 19, 939, 26 };
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    selection_sort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }

    int arr3[] = { 60, -38, -24, 76, 8, 93, 0, -3 };
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    selection_sort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}