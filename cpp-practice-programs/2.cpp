//- Print even numbers up to N
#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number  ";
    cin>>N;
    for(int i = 2; i<=N; i+=2){
        cout<<i<<endl;
    }
    return 0;

}