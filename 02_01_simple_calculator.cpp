//1. WAP to create simple calculator using class
#include <iostream>
using namespace std;

class cal {
private:
    int a, b, ans;

public:
    void get_number() {
        cout << " Enter number 1 for operation : ";
        cin >> a;
        cout << "Enter number 2 for operation : ";
        cin >> b;
    }

    void add() {
        ans = a + b;
        cout << "\n\n\t Your Ans :" << ans;
    }

    void sub() {
        ans = a - b;
        cout << "\n\n\t Your Ans :" << ans;
    }

    void div() {
        ans = a / b;
        cout << "\n\n\t Your Ans :" << ans;
    }

    void mul() {
        ans = a * b;
        cout << "\n\n\t Your Ans :" << ans;
    }
};

int main() {
    int op;
    cal cal1;

    // Get the numbers from the user
    cal1.get_number();

    // Display operation choices
    cout << "\n\n\t Which operation would you like to perform? ";
    cout << "\n\n\t 1. + (Addition)";
    cout << "\n\n\t 2. - (Subtraction)";
    cout << " \n\n\t 3. * (Multiplication)";
    cout << "\n\n\t 4. / (Division)";
    cout << "\n\n\t Enter operation number : ";
    cin >> op;

    // Perform the chosen operation
    switch (op) {
    case 1:
        cal1.add();
        break;
    case 2:
        cal1.sub();
        break;
    case 3:
        cal1.mul();
        break;
    case 4:
        cal1.div();
        break;
    default:
        cout << "\n\n\t Enter right value!";
        break;
    }

    return 0;
}

