// n Write a C++ program using a friend function to find the sum of two
//  numbers where the numbers are stored in two different classes.
#include <iostream>
using namespace std;
class A {
    int num1;
    public :
    A(){
    num1 = 10;}
friend int add(A,B);
};
class B {
    int num2;
    public :
    B (){
    num2 = 20;}

friend int add(A,B);

return a.num1+b.num2;

};
int main(){
   A obj1;
   B obj2;
   cout<<"Sum = "<<add(obj1,obj2);
   return 0;
}