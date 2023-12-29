#include<bits/stdc++.h>
vector<int> Solution::repeatedNumber(const vector<int> &a) {
    int xr = 0;
    vector<int> b = a;
    int c;
    for(int i=0;i<a.size();i++){
        xr = xr^(i+1)^a[i];
    }
    for(int i=0;i<a.size();i++){
        if(b[abs(b[i])-1] < 0){
            c = abs(b[i]);
            break;
        }
        b[abs(b[i])-1] = b[abs(b[i])-1]*-1;
    }
    return {c,c^xr};
}
