#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> arr;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	arr.push_back(a[i]);
	}
	sort(a.begin(),a.end());
	vector<int> ans;
	for(int i=0;i<n;i++){
		if(a[i]<=k){
			ans.push_back(a[i]);
			k-=a[i];
		}
	}
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<arr.size();j++){
			if(ans[i]==arr[j]){
				arr[j]=-1;
				cout<<j+1<<" ";
				break;
			}
		}
	}
    return 0;
}

