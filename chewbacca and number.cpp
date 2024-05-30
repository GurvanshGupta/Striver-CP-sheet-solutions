#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
	string str=to_string(x);
	for(int i=0;i<str.length();i++){
		if(i==0 && str[i]=='9'){
			continue;
		}
		int a=stoi(string(1,str[i]));
		if((9-a)<a){
			str[i]=to_string(9-a);
		}
	}
	cout<<stoi(str);
	return 0;
}
