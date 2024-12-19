#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout <<"Enter the first number: ";
    cin >> n1;
    cout <<"Enter the second number: ";
    cin >> n2;
    cout <<"Enter the third number: ";
    cin >> n3;
    int max=0;
    if (n1>n2 && n1>n3)  max=n1;
    if (n2>n3 && n2>n1) max=n2;
    if (n3>n1 && n3>n2) max=n3;
    cout << "The largest number is: "<< max;
}