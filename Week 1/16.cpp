void sort012(int a[], int n)
    {
        // code here '
        int z=0,o=0,t=n-1;
        while(t>=o){

            if(a[o] == 0){
                a[o] = a[z];
                a[z] = 0;
                o++;
                z++;
            }
            else if(a[o] == 1)o++;
            else{
                a[o] = a[t];
                a[t] = 2;
                t--;
            }
        }
    }