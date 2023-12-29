int mod(int a){
    if(a>0)return a;
    return -a;
}
int Solution::threeSumClosest(vector<int>& A, int B) {
    sort(A.begin(),A.end());
    int sum=INT_MIN,n=A.size();
        for(int i=0;i<n;i++){         
            int j=i+1,k=n-1;
            // cout << i << j << k;
            while(j<k){
                if(mod(B-sum) > mod(B-A[i]-A[j]-A[k])){
                    sum = A[i]+A[j]+A[k];
                }
                if(A[j] + A[k] > B-A[i]){
                    k--;
                }
                else if(A[j] + A[k] < B-A[i]){
                    j++;
                }
                else{
                    return B;
                }
            }
        }
        return sum;
}
