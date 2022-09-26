#include <stdio.h>

void printMultiplicationTable() { // Do NOT touch this line at all
    for (int i = 1; i < 17; i++) {
        for (int j = 1; j < 17; j++) {
            printf("%d x %d = %d\n", i, j, (i * j));
        }
    }
}

int isPalindrome(int elements[], int size) { // Do NOT touch this line at all
    for (int i = 0; i < size - 1; i++) {
        if (elements[i] != elements[size - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char **argv){ // Do NOT touch this line at all

    printMultiplicationTable();

    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {1, 2, 3, 3, 2, 1};
    int arr3[] = {1, 2, 3, 2, 3};
    int arr4[] = {1, 2, 3, 3, 2, 3};

    printf("arr1: %d\n", isPalindrome(arr1, 5));
    printf("arr2: %d\n", isPalindrome(arr2, 6));
    printf("arr3: %d\n", isPalindrome(arr3, 5));
    printf("arr4: %d\n", isPalindrome(arr4, 6));
}
