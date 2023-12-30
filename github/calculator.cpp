#include <iostream>
#include <cstdlib>

using namespace std;


double addition() {
    int n;
    cout << "How many numbers do you want to add? ";
    cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        double num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        sum += num;
    }

    return sum;
}


double subtraction() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    return num1 - num2;
}


double multiplication() {
    int n;
    cout << "How many numbers do you want to multiply? ";
    cin >> n;

    double product = 1;
    for (int i = 0; i < n; i++) {
        double num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        product *= num;
    }

    return product;
}


double division() {
    double num1, num2;
    cout << "Enter the numerator: ";
    cin >> num1;
    cout << "Enter the denominator: ";
    cin >> num2;

    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }

    return num1 / num2;
}

int main() {
    while (true) {
        int choice;
        cout << "Calculator Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Result: " << addition() << endl;
                break;
            case 2:
                cout << "Result: " << subtraction() << endl;
                break;
            case 3:
                cout << "Result: " << multiplication() << endl;
                break;
            case 4:
                cout << "Result: " << division() << endl;
                break;
            case 5:
                system("cls");
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
