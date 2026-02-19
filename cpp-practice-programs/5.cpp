//Sum of first N natural numbers
 #include <iostream>
using namespace std;
int main(){
    int N;
    int sum =0;
    cout<<"Enter the number  ";
    cin>>N;
    for(int i = 1; i<=N; i++){
        
        cout<<i<<endl;
        sum += i;
    }
    cout<<sum;
    return 0;

}