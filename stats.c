#include <stdio.h>
#include "stats.h"

void print_array(unsigned char* data, unsigned int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%u ", data[i]);
    }
    printf("\n");
}

unsigned char find_median(unsigned char* data, unsigned int size) {
    // Sort the array
    sort_array(data, size);

    // Calculate the median
    if (size % 2 == 0) {
        return (data[size / 2 - 1] + data[size / 2]) / 2;
    } else {
        return data[size / 2];
    }
}

unsigned char find_mean(unsigned char* data, unsigned int size) {
    unsigned int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

unsigned char find_maximum(unsigned char* data, unsigned int size) {
    unsigned char maximum = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > maximum) {
            maximum = data[i];
        }
    }
    return maximum;
}

unsigned char find_minimum(unsigned char* data, unsigned int size) {
    unsigned char minimum = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < minimum) {
            minimum = data[i];
        }
    }
    return minimum;
}

void sort_array(unsigned char* data, unsigned int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (data[j] < data[j + 1]) {
                // Swap the elements
                unsigned char temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void print_statistics(unsigned char* data, unsigned int size) {
    unsigned char minimum = find_minimum(data, size);
    unsigned char maximum = find_maximum(data, size);
    unsigned char mean = find_mean(data, size);
    unsigned char median = find_median(data, size);

    printf("Statistics:\n");
    printf("Minimum: %u\n", minimum);
    printf("Maximum: %u\n", maximum);
    printf("Mean: %u\n", mean);
    printf("Median: %u\n", median);
}

int main() {
    // Test data
    unsigned char data[] = {34, 65, 12, 87, 42, 19, 75, 51, 26, 93};

    unsigned int size = sizeof(data) / sizeof(data[0]);

    print_array(data, size);
    print_statistics(data, size);

    return 0;
}

