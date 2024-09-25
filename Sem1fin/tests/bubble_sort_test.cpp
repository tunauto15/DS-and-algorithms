#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <../bubble_sort.h>

TEST_CASE("Bubble_sort Test") {
    int arr[] = { 32, 28, 55, 10, 89, 3, 60, 37 };
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(n, arr);
    for (int i = 0; i < n - 1; i++) {
        REQUIRE(arr[i] <= arr[i + 1]);
    }   
    double arr2[] = { 3, 7, 2, 9, 1 };
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    bubble_sort(n2, arr2);
    for (int i = 0; i < n2 - 1; i++) {
        REQUIRE(arr2[i] <= arr2[i + 1]);
    }
    int arr3[] = { 7, 7, 7, 7, 7 };
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    bubble_sort(n3, arr3);
    for (int i = 0; i < n3 - 1; i++) {
        REQUIRE(arr3[i] <= arr3[i + 1]);
    }
}