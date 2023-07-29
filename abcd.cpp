#include<iostream>
class room;{
    public;
    double l,b,h;
    double calculatearea(){
        return l*b;
    }
    double calculate volume(){
        return l*b*h;
    }
};
int main(){
    Room R;
    cout<<"enter the length";
    cin>>R.length;
    cout<<"enter the breath";
    cin>>R.breath;
    cout<<"enter the height";
    cin>>R.height;
    cout<<"Area of room="<<R.calculate area()endl;
    cout<<"Area of Room="<<R.calculate volume()endl;
    return 0;
}