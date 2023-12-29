void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    for(int i=0;i<n;i++){
        int j=i,k=i;
        while(j<n & k<n){
            int temp = A[i][j];
            A[i][j] = A[k][i];
            A[k][i] = temp;
            j++;
            k++;
        }
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            int temp = A[j][i];
            A[j][i] = A[j][n-1-i];
            A[j][n-1-i] = temp;
        }
    }
}