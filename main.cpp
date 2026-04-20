#include <iostream>
#include "binaryTreeType.h"
using namespace std;

void testTree(int arr[], int size) {
    binaryTreeType tree;

    for (int i = 0; i < size; i++) {
        tree.insert(arr[i]);
    }

    cout << "Single parent nodes: " << tree.singleParent() << endl;
}

int main() {
    // Test Case 1
    int test1[] = {50, 30, 70, 20, 40, 60, 80};
    cout << "Test Case 1: ";
    testTree(test1, 7);

    // Test Case 2
    int test2[] = {50, 30, 70, 20, 60};
    cout << "Test Case 2: ";
    testTree(test2, 5);

    // Test Case 3
    int test3[] = {10, 20, 30, 40};
    cout << "Test Case 3: ";
    testTree(test3, 4);

    return 0;
}