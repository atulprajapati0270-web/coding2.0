// Check if a number is strong
#include <iostream>
using namespace std;
int main () {
    int num,sum = 0,temp,digit;
    cout<<"Enter the number ";
    cin>>num;
    temp = num;
while(temp > 0){
    digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
}
        sum += fact;
        temp /= 10;
    }
if(sum == num ){
cout<<num<<" is strong number";
}
else{
    cout<<num<<" is not a strong number";
}
return 0;
}