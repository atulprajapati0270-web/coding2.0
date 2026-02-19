// Sum of digits of a number

#include <iostream>
using namespace std;
int main(){
    int num;
    int sum =0,rem;
    cout<<"Enter the number  ";
    cin>>num;
    while(num > 0){
        rem = num%10;
        sum = sum+rem;
        num = num /10; 
    }
    cout<<sum;
    return 0;
}