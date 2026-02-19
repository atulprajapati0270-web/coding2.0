//2. Write a function using reference variables as arguments to swap the values of a pair of integers

#include <iostream>
using namespace std;
int main (){
    int a,b;
    cout << "enter the first number  ";
    cin >> a;
    cout << "enter the second number ";
    cin >> b;
    if (a > b)
    cout << "Larger value is  " << a;
else 
cout << "Larger value is  " << b;
return 0;
}