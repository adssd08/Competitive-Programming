#include<iostream>
using namespace std;
bool check_ambiguous_permutation(int a[],int n)
{
    int b[n],j=0;
    for(int i=0;i<n;i++)
    {
        b[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        while(a[j]!=i+1)
        {
            j++;
        }
        if(a[i]!=b[j])
        {
            return false;
        }
        j=0;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int a[n];
        bool flag;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        flag=check_ambiguous_permutation(a,n);
        if(flag)
        {
            cout<<"ambiguous"<<endl;
        }
        else
        {
            cout<<"not ambiguous"<<endl;
        }
        cin>>n;
    }
    return 0;
}
