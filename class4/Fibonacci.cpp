#include<bits/stdc++.h>
using namespace std;

vector<int> getFirstNTermsOfFibonacci(int n){
    if(n==1) return {0};
    int first_term =0, second_term=1;
    vector<int>A;
    A.push_back(first_term);
    A.push_back(second_term);
    int cur_term = second_term;
    int prev_term = first_term;
    
    for(int i=3;i<=n;i++){
        int next_term = cur_term + prev_term;
        A.push_back(next_term);
        prev_term = cur_term;
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
    cout << "Fib : ";
    vector<int>Fib= getFirstNTermsOfFibonacci(8);
    printArray(Fib);
    
}
