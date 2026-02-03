//Write a function using reference variables as arguments to swap the values of a pair of integers
 
#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp ;
temp = a;
a = b;
b = temp;
}
int main (){
int x , y;
cout << "enter two number  ";
cin >> x >> y;
swap(x , y);
cout << "After swaping:  \n ";
cout << "x = " << x <<endl;
cout << "y = " << y << endl;
return 0;

}