// Macro to find largest of three numbers
#include <iostream>
using namespace std;

#define LARGEST(a, b, c) ((a > b && a > c) ? a : (b > c ? b : c))

int main() {
    int x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Largest number = " << LARGEST(x, y, z);

    return 0;
}