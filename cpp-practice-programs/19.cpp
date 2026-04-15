// Find square root using iterative method
#include <iostream>
using namespace std;
int main() {
    double num, guess;
    cout<<"Enter a number: ";
    cin >> num;
    guess = num / 2.0;
    for (int i = 0; i < 10; i++) {
        guess = (guess + num / guess) / 2.0;
    }
    cout<<"Square root of  "<< num <<" is "<< guess;

    return 0;
}