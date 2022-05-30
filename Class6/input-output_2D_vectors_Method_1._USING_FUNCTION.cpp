#include<bits/stdc++.h>
using namespace std;

vector<int> inputAnArray(int m){
    vector<int>tempArray;
    for(int j=0;j<m;j++){
        int temp=0;
        cin>>temp;
        tempArray.push_back(temp);
    }
    return tempArray;
}
int main() {
    int n=3,m=4;
    vector<vector<int>>A;
    for(int i=0;i<n;i++){
        A.push_back(inputAnArray(m));
    }
    
    cout<<"output ArrayColumn Wise: "<<"\n";
    
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    std::cout << "Hello World!\n";
}
