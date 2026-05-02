#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    // Security Login (Reuse your previous logic!)
    string user, pass;
    cout << "--- BANKING PORTAL LOGIN ---" << endl;
    cout << "Username: "; cin >> user;
    cout << "Password: "; cin >> pass;

    if (user != "admin" || pass != "1234") {
        cout << "Invalid Access!" << endl;
        system("pause");
        return 0;
    }

    // Account Data
    string accHolder = "Arzoo Maqsood";
    int accNum = 98765;
    double balance = 5000.0; // Starting balance
    int choice;
    double amount;

    while (true) { // This keeps the menu running
        cout << "\n--- Welcome, " << accHolder << " ---" << endl;
        cout << "Account No: " << accNum << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Select option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nYour Current Balance: Rs. " << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount; // Adds to balance
                cout << "Successfully deposited! New Balance: Rs. " << balance << endl;
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient Funds! You only have Rs. " << balance << endl;
                } else {
                    balance -= amount; // Subtracts from balance
                    cout << "Transaction Successful! New Balance: Rs. " << balance << endl;
                }
                break;
            case 4:
                cout << "Thank you for using our Banking System. Goodbye!" << endl;
                system("pause");
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}

