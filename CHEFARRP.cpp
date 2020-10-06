#include<iostream>
#include<stdio.h>
using namespace std;
long long int fun(long long int a[],int n,int s,int k){
    if(s==n)
        return k;
    else{
        int sum = a[s];
        int pro = a[s];
        k++;
        int i;
        for(i=s+1;i<n;i++){
            sum = sum + a[i];
            pro = pro*a[i];
            //printf(" %d %d \n",sum,pro);
            if(sum==pro)
                k++;
        }
        fun(a,n,s+1,k);
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int a[n];
        int i;
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        long long int c = fun(a,n,0,0);
        cout<<c<<endl;
    }
}
