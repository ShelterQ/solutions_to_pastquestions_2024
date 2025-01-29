#include <iostream>
#include <string>
using namespace std;

class Questions {
public:
    // Question 2a: Check if a number is prime
    bool isPrime(int* num) {
        if (*num <= 1) return false;
        for (int i = 2; i * i <= *num; i++) {
            if (*num % i == 0) return false;
        }
        return true;
    }

    // Question 2b: Compute the sum of all elements in an array
    int sumArray(int* arr, int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    // Question 3a: Implement bubble sort
    void bubbleSort(int* arr, int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    // Question 3b: Read 10 numbers, compute sum and average
    void sumAndAverage() {
        int numbers[10];
        int sum = 0;
        cout << "Enter 10 numbers: ";
        for (int i = 0; i < 10; i++) {
            cin >> numbers[i];
            sum += numbers[i];
        }
        double average = static_cast<double>(sum) / 10;
        cout << "Sum: " << sum << ", Average: " << average << endl;
    }

    // Question 4a: Compute the length of a string
    int stringLength(const char* str) {
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }
        return length;
    }

    // Question 4b: Linear search to find the position of a target value
    int linearSearch(int* arr, int size, int target) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1; // Not found
    }

    // Question 5a: Add two numbers using pointers
    int addNumbers(int* a, int* b) {
        return *a + *b;
    }

    // Question 5b: Check if a number is a palindrome
    bool isPalindrome(int* num) {
        int original = *num;
        int reversed