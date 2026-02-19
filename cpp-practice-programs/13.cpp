// Find LCM of two numbers
#include<iostream>
using namespace std;
int main() {
    int a, b, tempA, tempB;
cout<<"Enter two numbers";
cin>>a>>b;

tempA = a;
tempB = b;
while (tempA != tempB){
    if(tempA > tempB)
    tempA -= tempB;
else
  tempB -= tempA;
}
int gcd = tempA;
int LCM = a*b/gcd;
cout << " LCM of "<<a<<" and "<<b <<" is "<<LCM;
 return 0;
}