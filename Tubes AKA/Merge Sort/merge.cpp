#include "merge.h"
#include <iostream>
using namespace std;

// Function to merge two subarrays
void Merge(std::vector<Transaction> &arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    std::vector<Transaction> L(n1);
    std::vector<Transaction> R(n2);

    for (int i = 0; i < n1; ++i)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i].amount <= R[j].amount) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to perform merge sort
void OrganizeTransaction(std::vector<Transaction> &arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort first and second halves
        OrganizeTransaction(arr, left, mid);
        OrganizeTransaction(arr, mid + 1, right);

        // Merge the sorted halves
        Merge(arr, left, mid, right);
    }
}

// Function to display the transactions
void DisplayTransactions(const std::vector<Transaction> &transactions) {
    for (const auto &t : transactions) {
        std::cout << "ID: " << t.id
                  << ", Amount: " << t.amount
                  << ", Description: " << t.description << std::endl;
    }
}
