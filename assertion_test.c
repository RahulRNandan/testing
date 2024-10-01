#include <stdio.h>
#include <assert.h>

// Function to check if a number is positive
int is_positive(int num) {
    return num > 0;
}

int main() {
    int test_num = 5;

    // Test case: Check if test_num is positive
    printf("Testing if %d is positive...\n", test_num);
    assert(is_positive(test_num) && "Test failed: The number is not positive");

    // If assert does not fail, print success message
    printf("Test passed: %d is positive.\n", test_num);

    // Another test case that will fail the assertion
    test_num = -3;
    printf("Testing if %d is positive...\n", test_num);
    assert(is_positive(test_num) && "Test failed: The number is not positive");

    return 0;
}
