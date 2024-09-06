#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a float number : ";
    cin>>x;
    int n = (int)x;
    float c = x-n;
    cout<<"Final ans is : "<<c;
    return 0;
}