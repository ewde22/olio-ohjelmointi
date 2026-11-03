#include <iostream>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b) {
    cout << "calcSum: " << a << " + " << b << " = " << (a + b) << endl;
}


void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "calcDiv error: Divisor cannot be zero!" << endl;
    } else {
        cout << "calcDiv: " << a << " / " << b << " = " << (static_cast<float>(a) / b) << endl;
    }
}


int retSum(int a, int b) {
    return a + b;
}


float retDiv(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Divisor cannot be zero!");
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a = 0;
    int b = 0;


    cout << "Type the first number (a): ";
    cin >> a;
    cout << "Type the second number (b): ";
    cin >> b;
    cout << endl;


    calcSum(a, b);
    calcDiv(a, b);
    cout << endl;


    int sumResult = retSum(a, b);
    cout << "retSum returned: " << a << " + " << b << " = " << sumResult << endl;


    float result = 0;
    try {
        result = retDiv(a, b);
        cout << a << "/" << b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
