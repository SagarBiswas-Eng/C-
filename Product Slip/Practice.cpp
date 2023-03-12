#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

// Taking user input.
    string name,ph_No,address;
    double price, discount;

    cout << " \t\t===== Enter Customer Details =====\t\t \n";

    cout << "\nEnter Name\t\t: ";
    getline(cin, name);

    cout << "Enter Phone Number\t: ";
    getline(cin, ph_No);

    cout << "Enter Address\t\t: ";
    getline(cin, address);

    cout << "Enter Product Price\t: ";
    cin >> price;

    cout << "Discount Rate\t\t: ";
    cin >> discount;

// Calculating price after discount.
    double discountAmount = price * discount/100;
    double totalPrice = price - discountAmount;
    cout << "Price after discount\t: " << totalPrice << endl;

// saving slip details to file.
    ofstream file;
    file.open("Practicing.txt", ios::app);

    if(file.is_open()) {
        file << " \n\t\t===== Enter Customer Details =====\t\t \n" << "\n\tName\t\t\t\t: " << name << "\n\tPhone Number\t\t: " << ph_No <<
             "\n\tAddress\t\t\t: " << address << "\n\tProduct Price\t\t: " << price << "-/" << "\n\tDiscount Rate\tx\t: " <<  discount << "%" <<
             "\n\tPrice after discount\t: " << totalPrice << "-/" << endl;
        file.close();
        cout << "\nSlip details saved to file." << endl;
    } else {
        cout << "\nError: Cloud not save slip details to file." << endl;
    }
    return 0;
}
