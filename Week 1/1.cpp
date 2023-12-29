#include<bits/stdc++.h>
int doIntersection(int a[], int n, int b[], int m)  {
    //code here
    unordered_map<int,int> mp;
    int cnt = 0;
    for(int i=0;i<n;i++){
        mp[a[i]] = 1;
    }
    for(int i=0;i<m;i++){
        if(mp[b[i]] == 1){
            mp[b[i]]--;
            cnt++;
        }
    }
    return cnt;
}

int doUnion(int a[], int n, int b[], int m)  {
    //code here
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]] = 1;
    }
    for(int i=0;i<m;i++){
        mp[b[i]] = 1;
    }
    return mp.size();
}
