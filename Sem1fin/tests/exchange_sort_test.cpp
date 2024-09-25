#include <catch.hpp>
#include <../exchange_sort.h>

TEST_CASE("exchange_sort") {
    int arr1[] = { 9, 1, 3, 8, 7, 2, 3 };
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    exchange_sort(n1, arr1);
    for (int i = 0; i < n1 - 1; i++) {
        REQUIRE(arr1[i] <= arr1[i + 1]);
    }

    double arr2[] = { 4, -3, -9, -2, 1 };
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    exchange_sort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }

    int arr3[] = { 4, 4, 4, 4, 4, 4 };
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    exchange_sort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}
