#include<bits/stdc++.h>
using namespace std;

int main() {
    int i=0;
    if(i++){
        cout<<"HELLO WORLD i: "<<i<<"\n";
    }
    cout<<i<<"\n";
    i=0;
    if(++i){
        cout<<"namaste world i:"<<i<<"\n";
    }
    cout<<"i: "<<i<<"\n";
    
    cout<<"\n";
    
    int j=0;
    cout<<"j with j++ :"<<j++<<"\n";
    cout<<"j after j++ :"<<j<<"\n";
    cout<<"j with ++j :"<<++j<<"\n";
    cout<<"j after ++j: "<<j<<"\n";
    
    cout<<"\n";
    int k=2;
    cout<<"k--: "<<k--<<"\n";
    cout<<"--k: "<<--k<<"\n";
    
}
/*
output
1
namaste world i:1
i: 1

j with j++ :0
j after j++ :1
j with ++j :1
j after ++j: 1

k--: 2
--k: 0
*/
