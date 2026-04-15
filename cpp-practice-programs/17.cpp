// Check if a number is perfect
#include <iostream>
using namespace std;
int main () {
    int num,sum = 0;
    cout<<"Enter the number ";
    cin>>num;
for(int i = 1; i <= num/2 ; i++){
    if(num%i == 0){
        sum += i;
    }
}
if(sum == num && num !=0){
cout<<num<<" is perfect number";
}
else{
    cout<<num<<" is not a perfect number";
}
return 0;
}