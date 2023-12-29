#include<bits/stdc++.h>

int firstMissingPositive(vector<int> &A) {
    int n = A.size();
    // cout << "helo" << n << endl;
    for(int i=0;i<n;i++){
        if(A[i] <= 0)A[i] = 0;
    }
    int last = 0;
    for(int i=0;i<n;i++){
        if(abs(A[i]) < n){
            A[abs(A[i])] = abs(A[abs(A[i])])*-1;
        }
        else if(abs(A[i]) == n)last = 1;
    }
    for(int i=1;i<n;i++){
        if(A[i] > 0)return i;
    }
    return last==1? n+1: n;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    cout << firstMissingPositive(arr);
}