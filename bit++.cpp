#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x=0;
	for(int i=0;i<n;i++){
	    string s;
	    cin>>s;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='+'){
	            x++;
	            break;
	        }
	        if(s[i]=='-'){
	            x--;
	            break;
	        }
	    }
	}
	cout<<x;
	return 0;
}