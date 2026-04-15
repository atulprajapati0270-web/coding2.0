// // Create two classes DM and DB which store the value of distances. DM stores distances in meters and
// centimeters and DB in feet and inches. Write a program that can read values for the class objects and odd one
// object of DM with another object of DB. Use a friend function to carry out the addition operation. The object
// that stores the results may be a DM object or DB object, depending on the units in which the result are
// required. The display should be in the format of feet and inches or meters and centimetres depending on the
// object on display.
#include<iostream>
using namespace std;    
class DB;
class DM{
    private:
    int m, cm;
    public:
    void getdata(){
        cout<<"Enter distance in meters and centimeters: ";
        cin>>m>>cm;
    }
    friend void add(DM, DB);
};
class DB{
    private:
    int ft, inch;
    public:
    void getdata(){
        cout<<"Enter distance in feet and inches: ";
        cin>>ft>>inch;
    }
    friend void add(DM, DB);
};
void add(DM d, DB b){
    int total_cm = d.m*100 + d.cm + (b.ft*30.48) + (b.inch*2.54);
    int total_m = total_cm / 100;
    int remaining_cm = total_cm % 100;
    cout<<"Total distance in meters and centimeters: "<<total_m<<" m "<<remaining_cm<<" cm"<<endl;

    int total_inch = (d.m*39.37) + (d.cm*0.3937) + (b.ft*12) + b.inch;
    int total_ft = total_inch / 12;
    int remaining_inch = total_inch % 12;
    cout<<"Total distance in feet and inches: "<<total_ft<<" ft "<<remaining_inch<<" inch"<<endl;
}
int main(){
    DM d;
    DB b;
    d.getdata();
    b.getdata();
    add(d, b);
    return 0;
}