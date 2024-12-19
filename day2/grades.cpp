#include<iostream>
using namespace std;
int main(){
    int s;
    cout << "Enter the score: ";
    cin>>s;
    if(s>=90 && s<100) cout <<"Grade: "<<'A';
    else if(s>=80 && s<89) cout <<"Grade: "<<'B';
    else if(s>=70 && s<79) cout <<"Grade: "<<'C';
    else if(s>=60 && s<69) cout <<"Grade: "<<'D';
    else  cout <<"Grade: "<<'F';
}