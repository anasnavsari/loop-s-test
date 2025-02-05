//sum of first and last digit of a number

#include<iostream>
using namespace std;

int main(){
    int num,first,last,sum;
    cout<<"Enter a number: ";
    cin>>num;
    last=num%10;
    while(num>=10){
        num=num/10;
    }
    first=num;
    sum=first+last;
    cout<<"The sum of first and last digit of the number is: "<<sum;
    return 0;
}