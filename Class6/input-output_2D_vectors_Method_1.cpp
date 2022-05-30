#include<bits/stdc++.h>
using namespace std;
int main() {
    int n=3,m=3;
    vector<vector<int>>A;
    for(int i=0;i<n;i++){
        vector<int>tempArray;
        for(int j=0;j<m;j++){
            int temp=0;
            cin>>temp;
            tempArray.push_back(temp);
        }
        A.push_back(tempArray);
    }
    
    cout<<"output Array: "<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    std::cout << "Hello World!\n";
}
