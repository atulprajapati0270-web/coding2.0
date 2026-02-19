//Find power of a number (a^b)
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a,b;
    double power;
    cout<<"Enter the numbers a  and b  ";
    cin>>a>>b;
    power = pow(a, b);
        cout << a << "^" << b << " = " << power << endl;

    return 0;
}