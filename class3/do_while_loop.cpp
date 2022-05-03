#include<bits/stdc++.h>
using namespace std;

int main() {
    int i=0;
    while(i<0){
        cout<<"while loop i: "<<i<<"\n";
    }
    
    //do while loop => run atleast once
    i=0;
    do{
        cout<<"do while loop i:"<<i<<"\n";
    }
    while(i<0);
    
    
    int n;
    do{
        cin>>n;
        if(n%2==0){
            cout<<n<<" is even\n";
        }
        else {
            cout<<n<<" is odd\n";
        }
    }
    while(n!=0);
}
//for input: 1 2 3 4 5 0
//output: 
//do while loop i:0
// 1 is odd
// 2 is even
// 3 is odd
// 4 is even
// 5 is odd
// 0 is even
