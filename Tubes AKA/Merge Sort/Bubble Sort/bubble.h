#ifndef BUBBLE_H_INCLUDED
#define BUBBLE_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>

// Transaction structure
struct Transaction {
    int id;
    double amount;
    std::string description;
};

// Function to swap two transactions
void Swap(Transaction &a, Transaction &b);

// Function to organize transactions using Bubble Sort
void OrganizeTransaction(std::vector<Transaction> &arr);

// Function to display the transactions
void DisplayTransactions(const std::vector<Transaction> &transactions);

#endif // BUBBLE_H_INCLUDED
