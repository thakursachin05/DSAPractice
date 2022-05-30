#include <bits/stdc++.h>
using namespace std;

//instead of return the vector, I am modifying the existing vector using pointers (passing by reference, using &)
void reverseTheArray(vector<int>&A){
	int i=0, j= A.size()-1;
	while(i<j)
	{
		swap(A[i],A[j]);
		i++;
		j--;
	}
}

//reversing the string, but here I haven't passed the string by refernce (using &), so I have to return the string
string reverseTheString(string s){
	int i=0;
	int j= s.size()-1;
	while(i<j)
	{
		swap(s[i],s[j]);
		i++;
		j--;
	}
	return s;
}

int main() {
	vector<int>A = {1,2,3,4,5,6,7};
	reverseTheArray(A);
	for(int i=0;i<A.size();i++) {
		cout<<A[i]<<" ";
	}
	cout<<"\n";
	cout<<reverseTheString("Akhilesh");
	return 0;
}
