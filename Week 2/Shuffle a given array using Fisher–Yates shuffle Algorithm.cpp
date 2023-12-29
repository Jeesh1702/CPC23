#include<bits/stdc++.h>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void shuffle(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        int rd = rand()%(i+1);
        swap(arr[i],arr[j]);
    }
}