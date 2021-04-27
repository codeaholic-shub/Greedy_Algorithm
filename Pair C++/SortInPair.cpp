#include<bits/stdc++.h>
using namespace std;
void sortChar(int a[],char b[],int n){
    pair<int,char>pa[n];
    for(int i=0;i<n;i++){
    pa[i]={a[i],b[i]};
    }

    sort(pa,pa+n);
    for(int i=0;i<n;i++)
    cout<<pa[i].second<<" ";
}
int main(){
    int a[]={10,15,5};
    char b[]={'X','Y','Z'};
    int n=3;
    sortChar(a,b,n);
    return 0;
}

// Time Complexity - O(nlogn)