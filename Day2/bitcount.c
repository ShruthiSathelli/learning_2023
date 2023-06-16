#include <stdio.h>

// Function to count the number of set bits in an integer
int countSetBits(int num) {
    int count = 0;

    while (num) {
        count += num & 1;  // Check the least significant bit
        num >>= 1;        // Right-shift the number by 1 bit
    }

    return count;
}
int totalSetBits(int arr[], int size) {
    int totalBits = 0;

    for (int i = 0; i < size; i++) {
        totalBits += countSetBits(arr[i]);
    }

    return totalBits;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);

    int totalBits = totalSetBits(arr, size);
    printf("The total number of set bits in the array is: %d\n", totalBits);

    return 0;
}
