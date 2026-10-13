#include<bits/stdc++.h>
using namespace std;

void selection(int a[],int n){
    for(int i=0; i<n-1; i++){
        int min_idx=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!=i){
            swap(a[min_idx],a[i]);
        }
    }
}
int main()
{
    int a[]= {3,5,1,9,6,4};
    int n=sizeof(a)/sizeof(a[0]);
    selection(a,n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
