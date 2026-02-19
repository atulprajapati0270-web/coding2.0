// Find factorial of a number
#include <iostream>
using namespace std;
int main(){
    int N;
    long long fact = 1;
    cout<<"Enter the number  ";
    cin>>N;
    for(int i = 1; i<=N; i++){
fact = fact*i;
    }
    cout<<fact;
    return 0;

}