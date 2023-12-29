#include <bits/stdc++.h>
using namespace std;


bool compare(vector<int> &a, vector<int> &b){
    if(a[1] == b[1]){
        return a[0] < b[0];
    }
    return a[1] > b[1];
}

int main() {
	//code
	int n,k;
	cin >> k;
	for(int a=0;a<k;a++){
	    cin >> n;
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
	        int temp;
			cin >> temp;
	        m[temp]++;
	    }
	    vector<vector<int>> freq;
	    for(auto i : m){
	        // cout << i.first << i.second << " ";
	        freq.push_back({i.first,i.second});
	    }
	    sort(freq.begin(),freq.end(),compare);
	    for(auto &i: freq){
	        for(int j=0;j<i[1];j++){
	           // arr.push_back(*j);
	           cout << i[0] << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}