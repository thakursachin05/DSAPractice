#include <bits/stdc++.h>
using namespace std;
 
string X="0123456789";
string add(string a, string b){
    string ans="";
    int i= a.size()-1;
    int j= b.size()-1;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int total = (a[i]-'0') + (b[j]-'0') + carry;
        //cout<<"to add: "<<a[i]<<" "<<b[j]<<" carry: "<<carry<<"\n";
        int last_digit = total%10;
        carry = total/10;
        //cout<<"total: "<<total<<" last_digit: "<<last_digit<<" carry: "<<carry<<"\n";
        ans =ans+X[last_digit];
        //cout<<ans<<"\n\n\n";
        i--; j--;
    }
    
    //a has finished
    // cout<<"a: "<<a<<" b: "<<b<<"\n";
     //cout<<"i: "<<i<<" j: "<<j<<" ans: "<<ans<<"\n";
    while(j>=0){
        int total = (b[j]-'0')+carry;
        int last_digit = total%10;
        ans = ans+X[last_digit];
        carry = total/10;
        j--;
    }
    
    //b has finished
    while(i>=0){
        int total = (a[i]-'0')+carry;
        int last_digit = total%10;
        ans = ans+X[last_digit];
        carry = total/10;
        i--;
    }
    //i=1 => ans = a[1]+ans => ans = '9'+"0"=> ans= "90", i-- => i= 0
    //i=0 => ans = '9'+ans => ans= "990"
    
    if(carry>0){
        ans= ans +X[carry];
    }
    reverse(ans.begin(),ans.end());
    cout<<"a: "<<a<<" b: "<<b<<" sum: "<<ans<<"\n"; 
    return ans;
}

int main(){
    if(add("123","456") != "579"){
        cout<<"wrong Answer: 1\n";
    }
    if(add("23","456") != "479"){
        cout<<"wrong Answer: 2\n";
    }
    if(add("123","57") != "180"){
        cout<<"wrong Answer: 3\n";
    }
    if(add("9","1")!="10"){
         cout<<"wrong Answer: 4\n";
    }
    if(add("999","1")!= "1000"){
        cout<<"wrong Answer: 5\n";
    }
}
