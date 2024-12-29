#include "bubble.h"
#include <iostream>
using namespace std;

int main() {
    std::vector<Transaction> transactions;
    int numTransactions;

    std::cout << "Enter the number of transactions: ";
    std::cin >> numTransactions;

    for (int i = 0; i < numTransactions; ++i) {
        Transaction t;
        t.id = i + 1;

        std::cout << "Enter the amount for transaction " << t.id << ": ";
        std::cin >> t.amount;

        std::cin.ignore(); // To clear the newline character left by std::cin
        std::cout << "Enter the description for transaction " << t.id << ": ";
        std::getline(std::cin, t.description);

        transactions.push_back(t);
    }

    std::cout << "\nOriginal Transactions:\n";
    DisplayTransactions(transactions);

    // Organize transactions
    OrganizeTransaction(transactions);

    std::cout << "\nSorted Transactions (by Amount):\n";
    DisplayTransactions(transactions);

    return 0;
}
