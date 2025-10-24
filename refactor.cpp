#include <iostream>
#include <string>
using namespace std;

// Enum for Payment Modes
enum class PaymentMode {
    PayPal,
    GooglePay,
    CreditCard,
    Unknown
};

// Helper function to convert PaymentMode to string
string paymentModeToString(PaymentMode mode) {
    switch (mode) {
        case PaymentMode::PayPal: return "PayPal";
        case PaymentMode::GooglePay: return "GooglePay";
        case PaymentMode::CreditCard: return "Credit Card";
        default: return "Unknown";
    }
}

// Checkout function
void checkout(PaymentMode mode, double amount) {
    cout << "\n--- Checkout Initiated ---" << endl;
    cout << "Selected Payment Mode: " << paymentModeToString(mode) << endl;
    cout << "Amount: $" << amount << endl;

    switch (mode) {
        case PaymentMode::PayPal:
            cout << "Processing payment via PayPal..." << endl;
            // Placeholder for PayPal API integration
            cout << "Payment successful!" << endl;
            break;

        case PaymentMode::GooglePay:
            cout << "Processing payment via GooglePay..." << endl;
            // Placeholder for GooglePay API integration
            cout << "Payment successful!" << endl;
            break;

        case PaymentMode::CreditCard:
            cout << "Processing payment via Credit Card..." << endl;
            // Placeholder for Credit Card API integration
            cout << "Payment successful!" << endl;
            break;

        default:
            cout << "Error: Invalid or unsupported payment mode!" << endl;
            break;
    }

    cout << "--- Checkout Completed ---" << endl;
}

// Main function
int main() {
    double amount = 150.75;

    checkout(PaymentMode::PayPal, amount);
    checkout(PaymentMode::GooglePay, amount);
    checkout(PaymentMode::CreditCard, amount);
    checkout(PaymentMode::Unknown, amount); // Test invalid mode

    return 0;
}
