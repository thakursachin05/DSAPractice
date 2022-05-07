#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

int reverseNumber(int n){
    long long reverse = 0;
    while(n>0){
        reverse = reverse*10 + n%10;
        n=n/10;
    }
    return reverse;
}

int main() {
    cout<<"sumOfDgits: " <<sumOfDigits(123)<<"\n";
    cout<<"Reverse: " <<reverseNumber(123)<<"\n";
}
