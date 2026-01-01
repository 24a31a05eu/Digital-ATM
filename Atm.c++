#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Function to safely read a double from user
bool readDouble(double &value) {
    cin >> value;
    if (cin.fail()) {
        cin.clear(); // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        return false;
    }
    return true;
}

int main() {
    int pin = 1234, enteredPin;
    double balance = 10000;
    string accountHolder = "John Doe";
    string accountNumber = "ACC123456789";
    string bankName = "Global Bank";

    cout << "******** WELCOME TO ATM SIMULATION********\n";

    // PIN VALIDATION (3 ATTEMPTS)
    int attempts = 3;
    while (attempts--) {
        cout << "Enter your 4-digit PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin)
            break;
        else
            cout << "Incorrect PIN. Attempts left: " << attempts << endl;

        if (attempts == 0) {
            cout << "Card blocked. Please contact the bank.\n";
            return 0;
        }
    }

    bool continueATM = true;

    while (continueATM) {
        int choice;

        // ATM MENU
        while (true) {
            cout << "\n========== ATM MENU ==========\n";
            cout << "1. Available Balance \n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Account Details\n";
            cout << "5. Change PIN\n";
            cout << "Enter your required choice: ";
            cin >> choice;

            if (choice >= 1 && choice <= 5) break;
            cout << "Please enter from given menu options.\n";
        }

        switch (choice) {
        case 1:
            cout << "Available Balance: ₹" << balance << endl;
            break;

        case 2: {
            double deposit;
            cout << "Enter amount to deposit: ₹";
            if (!readDouble(deposit) || deposit <= 0) {
                cout << "Invalid format or amount. Transaction skipped.\n";
                break;
            }
            balance += deposit;
            cout << "Amount Deposited successfully.\n";
            break;
        }

        case 3: {
            double withdraw;
            cout << "Enter amount to withdraw: ₹";
            if (!readDouble(withdraw) || withdraw <= 0 || withdraw > balance) {
                cout << "Invalid format or insufficient balance. Transaction skipped.\n";
                break;
            }
            balance -= withdraw;
            cout << "Please collect your cash.\n";
            cout << "Amount withdrawn successfully.\n";
            break;
        }

        case 4: // Account Details
            cout << "\n-------- ACCOUNT DETAILS --------\n";
            cout << "Bank Name         : " << bankName << endl;
            cout << "Account Holder    : " << accountHolder << endl;
            cout << "Account Number    : " << accountNumber << endl;
            cout << "Available Balance : ₹" << balance << endl;
            break;

        case 5: {
            int oldPin, newPin;
            cout << "Enter current PIN: ";
            cin >> oldPin;
            if (oldPin != pin) {
                cout << "Incorrect PIN.\n";
                break;
            }
            cout << "Enter new 4-digit PIN: ";
            cin >> newPin;
            if (newPin < 1000 || newPin > 9999) {
                cout << "Invalid PIN format.\n";
                break;
            }
            pin = newPin;
            cout << "PIN changed successfully.\n";
            break;
        }
        }

        // CONTINUE ATM?
        while (true) {
            char ch;
            cout << "\nDo you want to perform another transaction? (y/n): ";
            cin >> ch;
            ch = tolower(ch);

            if (ch == 'y') {
                break;
            } else if (ch == 'n') {
                cout << "\nThank you for using ATM. Visit Again!\n";
                continueATM = false;
                break;
            } else {
                cout << "Enter from given options (y/n).\n";
            }
        }
    }

    return 0;
}
