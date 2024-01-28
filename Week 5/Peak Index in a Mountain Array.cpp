class Solution {
public:
    // int search(vector<int> a,int l,int r){
    //     // if(l>=r)return l;
    //     // if(l<0)return 0;
    //     // if(r==l+1){
    //     //     if(a[l]>a[r])return l;
    //     //     return r;
    //     // }
    //     // int mid = (l+r)/2;
        
    //     // if(mid==r)return r;
    //     // if(a[mid] > a[mid-1] && a[mid] > a[mid+1])return mid;
    //     // else if(a[mid] > a[mid-1] && a[mid] < a[mid+1] )return search(a,mid+1,r);
    //     // return search(a,l,mid-1);
    // }
    int peakIndexInMountainArray(vector<int>& arr) {
        // return search(arr,0,arr.size());
        int l=0,r=arr.size()-1,n=arr.size();
        while(l<r){
            int m = (l+r+1)/2;
            if((m==0 || arr[m-1]<arr[m]) && (m+1>=n || arr[m+1]<arr[m]))return m;
            else if(m+1<n && arr[m+1]>arr[m])l=m+1;
            else r=m-1;
        }
        return l;
    }
};
