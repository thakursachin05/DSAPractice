#include<bits/stdc++.h>
using namespace std;

vector<int> getFirstNthTermOfGP(int first_term, int common_diff, int n){
    vector<int>A;
    A.push_back(first_term);
    int cur_term = first_term;
    for(int i=1;i<n;i++){
        int next_term = cur_term*common_diff;
        A.push_back(next_term);
        cur_term = next_term;
    }
    return A;
}
vector<int> getFirstNthTermOfAP(int first_term, int common_diff, int n){
    vector<int>A;
    A.push_back(first_term);
    int cur_term = first_term;
    for(int i=1;i<n;i++){
        int next_term = cur_term+common_diff;
        A.push_back(next_term);
        cur_term = next_term;
    }
    return A;
}

void printArray(vector<int>A){
    /*
     in the following loop instead of doing for(int i=0;i<n;i++) and cout<<A[i];
     we are going through each element of A directly and printing that so doing the same thing;
    */
    
    for(int a:A) cout<<a<<" ";
    cout<<"\n";
}
int main() {
    cout << "AP : ";
    vector<int>AP= getFirstNthTermOfAP(1,2,5);
    printArray(AP);
    vector<int>GP = getFirstNthTermOfGP(1,2,5);
    cout << "GP : ";
    printArray(GP);
    
}
