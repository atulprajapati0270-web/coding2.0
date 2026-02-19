 // Print multiplication table of a number
 #include<iostream>
 using namespace std;
 int main() {
    int num;
    cout <<"Enter the number  ";
    cin >> num;
    cout<<"Multiplication table of "<< num<<endl;
    for (int i = 1; i <= 10; i++){
        //cout <<num <<" X "<< i << num * i;
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}