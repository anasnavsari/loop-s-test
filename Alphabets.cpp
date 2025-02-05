// Write a code to print al the alphabets from a to z by skipping 3  alphabet. 

#include <iostream>
using namespace std;

int main(){
    char alpha='a';
    do{
        cout<<alpha<<" ";
        alpha=alpha+4;
    }while(alpha<='z');
    return 0;
}
    
