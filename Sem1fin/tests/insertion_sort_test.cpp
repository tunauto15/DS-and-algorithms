#include <catch.hpp>
#include <../insertion_sort.h>

TEST_CASE("insertion_sort test") {
    int arr1[] = { 34, 3, 21, 345, 67, 123, 432 };
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    insertion_sort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    int arr2[] = { 9, 1, 5, 32, 28, 73 };
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    insertion_sort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }

    int arr3[] = { 23, 7, 12, -89, 83, 29, 1 };
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    insertion_sort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}