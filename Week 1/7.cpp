#include<bits/stdc++.h>
int repeatedNumber(const vector<int> &A) {
    long long n=A.size(),c1=0,c2=0,n1=-1,n2=-1;
    int limit = n/3;
    for(int i : A){
        if(i == n1){
            c1++;
        }
        else if(i==n2){
            c2++;
        }
        else if(c1==0){
            n1=i;
            c1++;
        }
        else if(c2==0){
            n2=i;
            c2++;
        }
        else{
            c1--;
            c2--;
        }
    }
    c1=0;
    c2=0;
    for(int i : A){
        if(i==n1){
            c1++;
        }
        else if(i==n2){
            c2++;
        }
        if(c1>limit){
            return n1;
        }
        if(c2>limit){
            return n2;
        }
    }
    return -1;
}