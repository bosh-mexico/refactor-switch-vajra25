#include <iostream>
#include <string>
using namespace std;

// Enum for supported Payment Modes
enum class PaymentMode {
    PayPal,
    GooglePay,
    CreditCard,
    Unknown
};

// Helper function to convert PaymentMode to string (for better readability)
string paymentModeToString(PaymentMode mode) {
    switch (mode) {
        case PaymentMode::PayPal: return "PayPal";
        case PaymentMode::GooglePay: return "GooglePay";
        case PaymentMode::CreditCard: return "Credit Card";
        default: return "Unknown";
    }
}

// Checkout function to process payment
void checkout(PaymentMode mode, double amount) {
    cout << "\n--- Checkout Process Initiated ---" << endl;
    cout << "Selected Payment Mode: " << paymentModeToString(mode) << endl;

    // Validate the amount
    if (amount <= 0) {
        cout << "Error: Invalid payment amount. Please enter a positive value." << endl;
        return;
    }

    // Process based on payment mode
    switch (mode) {
        case PaymentMode::PayPal:
            cout << "Processing PayPal payment of $" << amount << "..." << endl;
            // Placeholder: integrate with PayPal API here
            cout << "Payment successful via PayPal!" << endl;
            break;

        case PaymentMode::GooglePay:
            cout << "Processing GooglePay payment of $" << amount << "..." << endl;
            // Placeholder: integrate with GooglePay API here
            cout << "Payment successful via GooglePay!" << endl;
            break;

        case PaymentMode::CreditCard:
            cout << "Processing Credit Card payment of $" << amount << "..." << endl;
            // Placeholder: integrate with CreditCard API here
            cout << "Payment successful via Credit Card!" << endl;
            break;

        default:
            cout << "Error: Unsupported or invalid payment mode selected!" << endl;
            break;
    }

    cout << "--- Checkout Completed ---" << endl;
}

// Example usage (main function)
int main() {
    double amount = 150.75;

    cout << "=== Payment System Demo ===" << endl;

    checkout(PaymentMode::PayPal, amount);
    checkout(PaymentMode::GooglePay, amount);
    checkout(PaymentMode::CreditCard, amount);
    checkout(PaymentMode::Unknown, amount); // Invalid mode test

    return 0;
}
