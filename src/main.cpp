#include <iostream>
#include <string>
using namespace std;

void printWelcomeMessage() {
    std::cout << "      Welcome to Git !       " << std::endl;
}


void greetUser() {
    std::cout << "Hello, Developer!" << std::endl;
}

int addNumbers(int a, int b) {
    return a + b;
}

int mulNumbers(int a, int b) {
    return a * b;
}

int subNumbers(int a, int b) {
    return a - b;
}

int divNumbers(int a, int b) {
    return a / b;
}

int main() {
    printWelcomeMessage();
    greetUser();
    int num1, num2;
    cout << "Enter number 1:\n";
    cin >> num1;
    cout << "Enter number 2:\n";
    cin >> num2;
    int choice;
    cout << "Enter choice of operation: \n1 for Addition(num1 + num2)\n2 for Subtraction(num1 - num2)\n3 for Multiplication(num1 * num2)\n4 for Division(num1 / num2)\n";
    cin >> choice;

    int ans;
    switch(choice) {
        case 1:
            ans = addNumbers(num1, num2);
            cout << "num1 + num2 = " << ans << "\n";
            break;
        case 2:
            ans = subNumbers(num1, num2);
            cout << "num1 - num2 = " << ans << "\n";
            break;
        case 3:
            ans = mulNumbers(num1, num2);
            cout << "num1 * num2 = " << ans << "\n";
            break;
        case 4:
            ans = divNumbers(num1, num2);
            cout << "num1 / num2 = " << ans << "\n";
            break;
        default:
            cout << "Invalid choice! Choose from 1, 2, 3, 4 only.\n";
            break;
    }
    std::cout << "Program finished successfully." << std::endl;


    // Part 6: Temporary dummy comment to demonstrate stash.

    //Part 7: Temporary dummy comment for Part 7.

    return 0;
}