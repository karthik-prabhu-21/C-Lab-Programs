#include <iostream>
using namespace std;

int area(int side){
    return side*side;
}

int area(int length,int breadth){
    return length*breadth;
}

int area(int base,int height){
    return 0.5*base*height;
}

int main(){
    int side ;
    cout<<"Enter the side of square: ";
    cin>>side;
    cout<<"Area of square: "<<area(side)<<endl;

    cout<<"Enter the length and breadth of rectangle: "<< endl;
    int length ,breadth;
    cin>>length>>breadth;
    cin>>side;
    cout<<"Area of rectangle: "<<area( length, breadth)<<endl;

    int base, height;
    cout<<"Enter base and height of triangle"<<endl;
    cin>>base>>height;
    cout<<"Area of triangle: "<<area(base,height)<<endl;
}