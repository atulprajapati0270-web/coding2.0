// Convert decimal to binary
#include <iostream>
using namespace std;
int main() {
    int num, binary[32], i = 0;
    cout<<"Enter a decimal number: ";
    cin>>num;
    int temp = num;
    while (temp > 0) {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }
cout<<"Binary of "<< num << "is: ";
    for (int j = i - 1; j >= 0; j--) {
        cout<< binary;
    }
    cout<<"Binary number is "<<binary<<endl;

    return 0;
}