// Check if a number is palindrome
#include <iostream>
using namespace std;
int main(){
    int num;
    int rev =0,rem , original;
    cout<<"Enter the number  ";
    cin>>num; 
    original = num;
    while(num > 0){
        rem = num%10;
        rev = rev * 10 + rem;
        num = num /10; 
    }
    if(original == rev){
        cout<<rev<<" " <<"Number is palindrome  ";
    }
    else
cout<<rev <<" Number is not palindrome";
    
    return 0;
}