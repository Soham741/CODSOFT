#include <iostream> 
using namespace std;

int main() {
    int num1, num2, operation;
    
    cout<<"Enter two numbers:\n";
    cin>>num1>> num2; 

    cout<<"Choose an operation:\n"<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multiplication\n"<<"4. Division\n";
    cin>>operation;

    switch(operation) {
        case 1:
            cout<<"Result: "<< num1 + num2 << endl;
            break;
        case 2:
            cout<<"Result: "<< num1 - num2 << endl;
            break;
        case 3:
            cout<<"Result: "<< num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout<<"Result: "<< num1 / num2 << endl;
            } else {
                cout<<"Division by zero is not allowed\n";
            }
            break;
        default:
            cout<<"Invalid choice. Please select a valid operation\n";
    }

    return 0;
}

