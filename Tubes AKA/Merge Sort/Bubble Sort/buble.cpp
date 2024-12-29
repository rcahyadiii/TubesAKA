#include "bubble.h"
#include <iostream>
using namespace std;

// Function to swap two transactions
// Function to swap two transactions
void Swap(Transaction &a, Transaction &b) {
    Transaction temp = a;
    a = b;
    b = temp;
}

// Function to organize transactions using Bubble Sort
void OrganizeTransaction(std::vector<Transaction> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j].amount > arr[j + 1].amount) {
                Swap(arr[j], arr[j + 1]);
            }
        }
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
