#ifndef MERGE_H_INCLUDED
#define MERGE_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>

// Transaction structure
struct Transaction {
    int id;
    double amount;
    std::string description;
};

// Function to merge two subarrays
void Merge(std::vector<Transaction> &arr, int left, int mid, int right);

// Function to perform merge sort
void OrganizeTransaction(std::vector<Transaction> &arr, int left, int right);

// Function to display the transactions
void DisplayTransactions(const std::vector<Transaction> &transactions);

#endif // MERGE_H_INCLUDED
