#include<bits/stdc++.h>
using namespace std;

void insertion(int a[],int n){
    for(int i=0;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
int main(){
    int a[]={7,3,2,6,5,8,1};
    int n=sizeof(a)/sizeof(a[0]);
    insertion(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
